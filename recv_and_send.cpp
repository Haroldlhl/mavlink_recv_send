#include<iostream>
#include<fstream>
#include <vector>
#include "include/mavlink/v2.0/common/mavlink.h"
#include "include/mavlink/v2.0/mavlink_types.h"
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread>
#include "include/matrix/math.hpp"
#include "include/mathlib/mathlib.h"

//创建新的套接字之前需要调用一个引入Ws2_32.dll库的函数,否则服务器和客户端连接不上
#pragma comment(lib,"ws2_32.lib")

using namespace std;


//发送和接受的具体处理函数
void handle_global_position_int(mavlink_message_t *msg) {
    using std::cout; using std::endl;
    mavlink_global_position_int_t global_pos;
    mavlink_msg_global_position_int_decode(msg, &global_pos);
    cout<<"global position print start:\n";
    cout<<"latitude: "<<float(global_pos.lat)*1e-7<<" deg"<<endl;
    cout<<"longitude: "<<float(global_pos.lon)*1e-7<<" deg"<<endl;
    cout<<"height: "<<float(global_pos.alt) * 0.001f<<" m"<<endl;
    cout<<"-------------------------\n"<<endl;
    cout<<"velocity print start (NED):\n";
    cout<<"north: "<<float(global_pos.vx)*0.01f<<"m/s"<<endl;
    cout<<"east: "<<float(global_pos.vy)*0.01f<<"m/s"<<endl;
    cout<<"down: "<<float(global_pos.vz)*0.01f<<"m/s"<<endl;
    cout<<"----------------------------\n"<<endl;
}

void handle_attitude(mavlink_message_t *msg){
    using std::cout; using std::endl;
    mavlink_attitude_t atti;
    mavlink_msg_attitude_decode(msg, &atti);
    cout<<"attitude print start:\n";
    cout<<"roll angle: "<< atti.roll<<" rad\n";
    cout<<"yaw angle: "<< atti.yaw<<" rad\n";
    cout<<"pitch angle: "<< atti.pitch<<" rad\n";
    cout<<"----------------------------\n"<<endl;
}

void receiveThreadFunc(int sockfd, const sockaddr_in &server_addr) {
    char recvbuf[1000];
    while(1)
    {
        socklen_t len = sizeof(sockaddr);
        int  recv_len;
        bool flag = true;
        while(flag){
            recv_len = recvfrom(sockfd, &recvbuf, sizeof(recvbuf), 0, (sockaddr *)&server_addr, &len);
            if(recv_len > 0){cout<<"received ！！！\n"; flag = false;}
            else{usleep(1000);}
        }


        mavlink_message_t msg;
        mavlink_status_t _status;

        for (int i=0; i<recv_len; i++)
        {
            if(mavlink_parse_char(MAVLINK_COMM_0, recvbuf[i], &msg, &_status))
            {
                std::cout << "received msg id " << (int)msg.msgid << std::endl;
                switch (msg.msgid)
                {
                    case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                        handle_global_position_int(&msg);
                        cout<<"received global position!!"<<endl;
                        break;

                    case MAVLINK_MSG_ID_ATTITUDE:
                        handle_attitude(&msg);
                        cout<<"received attitude"<<endl;
                        break;

                    case MAVLINK_MSG_ID_HEARTBEAT:
                        cout<<"received heart beat!!"<<endl;
                        break;
                }
            }
        }
        usleep(100000);
    }
}

// UDP发送函数
void sendThreadFunction(int sockfd, char* ipAddr, int port){

    struct sockaddr_in server_addr;
    // 设置服务器地址和端口
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    server_addr.sin_addr.s_addr = inet_addr(ipAddr);

    //发送位置设置
    mavlink_set_position_target_local_ned_t t_pos{};
    t_pos.time_boot_ms = 0;
    t_pos.x = 100; //m
    t_pos.y = 100;
    t_pos.z = 100;
    t_pos.target_system = 1;
    t_pos.target_component = 1;
    t_pos.coordinate_frame = MAV_FRAME_LOCAL_NED;
    t_pos.type_mask = 0b110111111000;
//     POSITION_TARGET_TYPEMASK



    //发送姿态设置
    mavlink_set_attitude_target_t t_atti{};
    t_atti.time_boot_ms = 0;//TODO 怎么 欧拉角转四元数  mask 也有问题
    t_atti.type_mask = 0b1000111; // set 1, 2, 4, 64
    matrix::Eulerf euler{1, 1, 1};
    matrix::Quatf q{euler};
    for (int i=0; i<4;i++){t_atti.q[i] = q(i);}

    //消息准备
    mavlink_message_t msg_t;


    while (1) {
        usleep(100000);

        int len0 = mavlink_msg_set_position_target_local_ned_encode(0, 0, &msg_t, &t_pos);
        uint8_t buffer0[len0];
        mavlink_msg_to_send_buffer(buffer0, &msg_t);
        int t0 = sendto(sockfd, &buffer0, len0, 0, (sockaddr*)&server_addr, sizeof(server_addr));
        cout <<"position of target is set, sendto_len:  "<<t0 << endl<< endl;//若发送失败。则返回-1

        int len1 = mavlink_msg_set_attitude_target_encode(0, 0, &msg_t, &t_atti);
        uint8_t buffer1[len1];
        mavlink_msg_to_send_buffer(buffer1, &msg_t);
        int t1 = sendto(sockfd, &buffer1, len1, 0, (sockaddr*)&server_addr, sizeof(server_addr));
        cout <<"attitude of target is set, sendto_len:  "<<t1 << endl<< endl;//若发送失败。则返回-1
    }

}


int main() {
    int receivePort = 26540;
    int sendPort = 24580;
    char* ip_addr = "127.0.0.1"; // 目标IP地址

    //绑定UDP socket 地址，绑定的是本机的地址和端口，用于接收数据
    struct sockaddr_in server_addr;
    // 设置服务器地址和端口
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(receivePort);
    server_addr.sin_addr.s_addr = inet_addr(ip_addr);
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    bind(sockfd, (sockaddr *)&server_addr, sizeof(sockaddr));

    // 创建接收线程
    std::thread receiveThread(receiveThreadFunc, sockfd, server_addr); //TODO 231031 harold:  UDP接受会阻塞, 查询如何解决
    std::thread sendThread(sendThreadFunction, sockfd, ip_addr, sendPort);

    // 等待接收线程结束
    receiveThread.join();
    sendThread.join();

    return 0;
}

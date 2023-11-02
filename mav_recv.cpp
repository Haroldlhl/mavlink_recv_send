#include<iostream>
#include "include/mavlink/v2.0/common/mavlink.h"
#include "include/mavlink/v2.0/mavlink_types.h"
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


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

void handle_local_position_ned_cov(mavlink_message_t *msg){
    using std::cout; using std::endl;
    mavlink_local_position_ned_cov_t local_pos;
    mavlink_msg_local_position_ned_cov_decode(msg, &local_pos);
    cout<<"acceleration print start(NED):\n";
    cout<<"ax: "<< local_pos.ax<<" m/s/s\n";
    cout<<"ay: "<< local_pos.ay<<" m/s/s\n";
    cout<<"az: "<< local_pos.az<<" m/s/s\n";
    cout<<"----------------------------\n"<<endl;
}

void handle_flow_angle(mavlink_message_t *msg){
    using std::cout; using std::endl;
    mavlink_flow_angle_t flow_angle;
    mavlink_msg_flow_angle_decode(msg, &flow_angle);
    cout<<"flow angle print start(NED):\n";
    cout<<"angle of attack: "<< float(flow_angle.angle_attack)*1e-7<<" deg. \n";
    cout<<"angle of slip: "<< float(flow_angle.angle_sideslip)*1e-7<<" deg. \n";
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

                    case MAVLINK_MSG_ID_LOCAL_POSITION_NED_COV:
                        handle_local_position_ned_cov(&msg);
                        cout<<"received local position!!"<<endl;
                        break;

                    case MAVLINK_MSG_ID_FLOW_ANGLE:
                        handle_flow_angle(&msg);
                        cout<<"received flow angle!!"<<endl;
                        break;

                }
            }
        }
        usleep(10000);
    }
}



int main() {
    int receivePort = 26540;
    char* ip_addr = "127.0.0.1"; // 目标IP地址

    //绑定UDP socket 地址，绑定的是本机的地址和端口，用于接收数据
    struct sockaddr_in server_addr;
    // 设置服务器地址和端口
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(receivePort);
    server_addr.sin_addr.s_addr = inet_addr(ip_addr);
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    bind(sockfd, (sockaddr *)&server_addr, sizeof(sockaddr));

    receiveThreadFunc(sockfd, server_addr);

    return 0;
}

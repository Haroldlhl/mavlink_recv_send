cmake_minimum_required(VERSION 3.5)
project(mavlink_recv_send)

set(CMAKE_CXX_STANDARD 11)

add_executable(send mav_send.cpp)

add_executable(recv mav_recv.cpp)

add_executable(recv_and_send recv_and_send.cpp)

target_link_libraries(recv_and_send pthread)



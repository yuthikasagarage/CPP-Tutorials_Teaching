cmake_minimum_required(VERSION 3.16)
project(recursove_mutex)
find_package( Threads )
set(CMAKE_CXX_STANDARD 14)

add_executable(recursove_mutex main.cpp)
target_link_libraries( recursove_mutex ${CMAKE_THREAD_LIBS_INIT} )
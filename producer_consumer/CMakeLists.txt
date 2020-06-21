cmake_minimum_required(VERSION 3.16)
project(producer_consumer)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(producer_consumer main.cpp)
target_link_libraries( producer_consumer ${CMAKE_THREAD_LIBS_INIT} )
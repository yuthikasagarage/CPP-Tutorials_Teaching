cmake_minimum_required(VERSION 3.16)
project(mutex)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(mutex main.cpp)
target_link_libraries( mutex ${CMAKE_THREAD_LIBS_INIT} )
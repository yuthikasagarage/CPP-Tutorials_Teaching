cmake_minimum_required(VERSION 3.16)
project(threading C CXX)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )


add_executable(threading main.cpp)
target_link_libraries( threading ${CMAKE_THREAD_LIBS_INIT} )
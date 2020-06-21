cmake_minimum_required(VERSION 3.16)
project(conditional_threading)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(conditional_threading main.cpp)

target_link_libraries( conditional_threading ${CMAKE_THREAD_LIBS_INIT} )
cmake_minimum_required(VERSION 3.16)
project(join_detach)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(join_detach main.cpp)
target_link_libraries( join_detach ${CMAKE_THREAD_LIBS_INIT} )
cmake_minimum_required(VERSION 3.16)
project(timed_mutex)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )

add_executable(timed_mutex main.cpp)
target_link_libraries( timed_mutex ${CMAKE_THREAD_LIBS_INIT} )
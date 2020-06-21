cmake_minimum_required(VERSION 3.16)
project(lock_guard)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(lock_guard main.cpp)
target_link_libraries( lock_guard ${CMAKE_THREAD_LIBS_INIT} )
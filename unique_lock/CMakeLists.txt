cmake_minimum_required(VERSION 3.16)
project(unique_lock)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(unique_lock main.cpp)
target_link_libraries( unique_lock ${CMAKE_THREAD_LIBS_INIT} )
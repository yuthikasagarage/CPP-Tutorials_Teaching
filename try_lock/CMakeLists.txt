cmake_minimum_required(VERSION 3.16)
project(try_lock)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )

add_executable(try_lock main.cpp)
target_link_libraries( try_lock ${CMAKE_THREAD_LIBS_INIT} )
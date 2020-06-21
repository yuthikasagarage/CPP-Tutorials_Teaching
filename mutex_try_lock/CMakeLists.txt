cmake_minimum_required(VERSION 3.16)
project(mutex_try_lock)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )

add_executable(mutex_try_lock main.cpp)
target_link_libraries( mutex_try_lock ${CMAKE_THREAD_LIBS_INIT} )
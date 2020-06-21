cmake_minimum_required(VERSION 3.16)
project(types_of_threads)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(types_of_threads main.cpp)
target_link_libraries( types_of_threads ${CMAKE_THREAD_LIBS_INIT} )
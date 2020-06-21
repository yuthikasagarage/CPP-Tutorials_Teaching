cmake_minimum_required(VERSION 3.16)
project(async)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(async main.cpp)
target_link_libraries( async ${CMAKE_THREAD_LIBS_INIT} )
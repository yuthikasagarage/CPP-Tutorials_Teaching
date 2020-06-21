cmake_minimum_required(VERSION 3.16)
project(future_promise)

set(CMAKE_CXX_STANDARD 14)
find_package( Threads )
add_executable(future_promise main.cpp)
target_link_libraries( future_promise ${CMAKE_THREAD_LIBS_INIT} )
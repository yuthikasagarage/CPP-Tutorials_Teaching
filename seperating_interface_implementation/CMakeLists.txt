cmake_minimum_required(VERSION 3.15)
project(seperating_interface_implementation)

set(CMAKE_CXX_STANDARD 14)

add_executable(seperating_interface_implementation main.cpp gradebook.cpp gradebook.h)
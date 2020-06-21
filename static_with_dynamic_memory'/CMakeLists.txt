cmake_minimum_required(VERSION 3.16)
project(static_with_dynamic_memory_)

set(CMAKE_CXX_STANDARD 14)

add_executable(static_with_dynamic_memory_ main.cpp employee.cpp employee.h)
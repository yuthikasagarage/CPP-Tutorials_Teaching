cmake_minimum_required(VERSION 3.16)
project(custom_object_in_custom_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(custom_object_in_custom_class main.cpp date.cpp date.h employee.cpp employee.h)
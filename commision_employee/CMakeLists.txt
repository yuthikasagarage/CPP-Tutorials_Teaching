cmake_minimum_required(VERSION 3.16)
project(commision_employee)

set(CMAKE_CXX_STANDARD 14)

add_executable(commision_employee main.cpp CommissionEmployee.cpp CommissionEmployee.h BaseplusCommission_employee.cpp BaseplusCommission_employee.h)
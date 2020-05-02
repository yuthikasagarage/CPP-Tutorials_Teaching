cmake_minimum_required(VERSION 3.16)
project(case_study_polymorphism_payroll)

set(CMAKE_CXX_STANDARD 14)

add_executable(case_study_polymorphism_payroll main.cpp Employee.cpp Employee.h SalariedEmployee.cpp SalariedEmployee.h disEmployee.cpp disEmployee.h)
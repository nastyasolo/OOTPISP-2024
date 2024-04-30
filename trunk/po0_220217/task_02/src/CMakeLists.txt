cmake_minimum_required(VERSION 3.15.0)

project(LAB_02)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} Administator.h Administator.cpp Engineer.cpp Engineer.h Employer.h Employer.cpp HumanResources.cpp HumanResources.h main.cpp )
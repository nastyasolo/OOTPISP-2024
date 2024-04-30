cmake_minimum_required(VERSION 3.15.0)

project(LAB_03_220220)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES main.cpp ProgrammError.cpp CastError.cpp ImpossibleToInterface.cpp CantCastValue.cpp NotEnoughPrivileges.cpp Container.cpp)

set(HEADER_FILES ProgrammError.h CastError.h ImpossibleToInterface.h CantCastValue.h NotEnoughPrivileges.h Container.h)

set(ALL_SOURCES ${HEADER_FILSE}
				${SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCES})
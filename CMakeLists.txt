cmake_minimum_required(VERSION 3.30)
project(Lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab2 main.cpp
        hello1Function.cpp
        hello1Function.h
        hello2Function.cpp
        hello2Function.h
        inherit2.h
        inherit2.cpp
        partTimeEmployee.h)

cmake_minimum_required(VERSION 3.16)
project(CPP_Exe_Playground)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_Exe_Playground main.cpp include/functions.h src/print_ascii.cpp)
cmake_minimum_required(VERSION 3.25)
project(AlgCamp)

set(CMAKE_CXX_STANDARD 17)

add_executable(day03 test.cpp day03/day03.cpp)
add_executable(day04 test.cpp day04/day04.cpp)
add_executable(day05 test.cpp day05/day05.cpp)
add_executable(day06 test.cpp day06/day06.cpp)
add_executable(day07 structDef/List/SqList.cpp test.cpp day07/day07.cpp)
add_executable(day08 structDef/List/SqList.cpp test.cpp day08/day08.cpp)
add_executable(day09 structDef/List/SqList.cpp test.cpp day09/day09.cpp)

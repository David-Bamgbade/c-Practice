cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled AppRunner.cpp
        Example1.cpp
        Example1.h
        Example2.cpp
        Example2.h
        EasyTask/EasyTask1.h
        EasyTask/Calculator.h
        EasyTask/EvenOdd.h
        EasyTask/LargestNumber.h
        EasyTask/StringReverse.h
)

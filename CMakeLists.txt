cmake_minimum_required(VERSION 3.31)
project(Pilha)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pilha main.cpp
        Stack.cpp
        Stack.h
        Queue.cpp
        Queue.h
)

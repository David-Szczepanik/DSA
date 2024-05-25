cmake_minimum_required(VERSION 3.28)
project(DSA)

set(CMAKE_CXX_STANDARD 17)

add_executable(DSA main.cpp
        LinkedLists.cpp
        LinkedLists/LL1.cpp
        LinkedLists/LL1.h
        Stack.cpp)

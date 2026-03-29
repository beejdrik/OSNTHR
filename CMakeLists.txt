cmake_minimum_required(VERSION 3.30)
project(OSNTHR)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(OSNTHR
        main.cpp
        Graph.cpp
        Graph.h
)

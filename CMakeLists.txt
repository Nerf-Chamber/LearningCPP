cmake_minimum_required(VERSION 4.1)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp
        Basics/Exercises/helloWorld.cpp
)

target_include_directories(C__ PRIVATE
    Basics/Declarations
)

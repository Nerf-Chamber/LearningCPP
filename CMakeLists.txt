cmake_minimum_required(VERSION 4.1)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp
        Declarations/basicsHeader.h

        Basics/helloWorld.cpp
        Basics/littleProblem.cpp
        Basics/secondsToHMS.cpp
        Basics/condicionals.cpp
        Basics/condicionalsV2.cpp
        Basics/while.cpp
        Basics/MCD.cpp
        Basics/for.cpp
        Basics/Triangle_P29973.cpp
        Basics/Rhombus_P72484.cpp
)

target_include_directories(C__ PRIVATE
        Declarations
)
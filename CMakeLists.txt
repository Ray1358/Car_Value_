cmake_minimum_required(VERSION 3.29)
project(Car_Value)

set(CMAKE_CXX_STANDARD 14)
set(CXXTEST_INCLUDE_DIR /Users/ramon/Documents/cxxtest-4.4)

set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE /Users/ramon/Documents/cxxtest-4.4/bin/cxxtestgen)

find_package(CxxTest REQUIRED)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()

    CXXTEST_ADD_TEST(unittest
            runner.cpp  # THIS IS GENERATED BUT YOU NEED TO ADD IT HERE
            ${CMAKE_CURRENT_SOURCE_DIR}/Car.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/newCxxTest.h  # YOUR TEST DESCRIPTION FILE
    )

endif()

add_executable(Car_Value main.cpp
        Car.cpp
        Car.h
        newCxxTest.h)

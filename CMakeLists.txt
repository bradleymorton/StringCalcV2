# CMakeLists.txt
#
# Created: 13 Feb 2019
# Updated: 13 Feb 2019
#
# For building CS 372 in class TDD Kata.

cmake_minimum_required(VERSION 2.6)

# Project name and c++ standard
project(TDD_Kata)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++14 -Wall -O3")

# Will look for headers first in /include directory
include_directories("include")

# Source files
set(SOURCE_FILES
  tests/catch_test_main.cpp
  tests/catch_test_suites.cpp
  src/StringCalc.cpp
)

# Define executable
set(EXECUTABLE_NAME main.out)
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})

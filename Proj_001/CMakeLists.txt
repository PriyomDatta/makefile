cmake_minimum_required(VERSION 3.10)

# Project name
project(MyProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add the library
add_library(MyLibrary src/MyLibrary.cpp)

# Add the executable
add_executable(MyProject src/main.cpp)

# Link the library to the executable
target_link_libraries(MyProject MyLibrary)
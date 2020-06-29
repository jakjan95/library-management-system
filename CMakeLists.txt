cmake_minimum_required(VERSION 3.10)
project(LMS)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror -Wconversion -Wpedantic)
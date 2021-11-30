cmake_minimum_required(VERSION 3.0.0)
project(test_number1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(test_number1 main.cpp test.cpp)
include_directories("/usr/include/eigen3")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

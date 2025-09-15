cmake_minimum_required(VERSION 3.10)
project(ECE231_Assignment2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_library(statistics statistics.cpp outputArray.cpp  )

add_executable(main main.cpp )
target_link_libraries(main statistics )
add_executable(test test.cpp )
target_link_libraries(test statistics )
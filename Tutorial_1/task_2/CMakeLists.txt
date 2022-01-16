cmake_minimum_required(VERSION 3.10)

# set the project name
project(First_CMake)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(subtract SHARED src/subtract.cpp )
add_library(sum SHARED src/sum.cpp )

# add the executable
add_executable(ipb_arithmetic src/main.cpp)
target_link_libraries(ipb_arithmetic subtract sum)

cmake_minimum_required(VERSION 3.4)
project(Sum)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_subdirectory(src)
add_subdirectory(tests)
add_executable(main src/main.cpp src/sum.cpp)
target_link_libraries(main B)

cmake_minimum_required(VERSION 3.15)
project(shaders)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -framework GLUT -framework OpenGL -Wno-deprecated")
add_executable(shaders main.cpp)
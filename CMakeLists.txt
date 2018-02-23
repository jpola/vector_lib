cmake_minimum_required(VERSION 3.0.1)

project(vector_lib)

add_library(vector_lib SHARED vector.h vector.cpp)

set_target_properties(vector_lib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)


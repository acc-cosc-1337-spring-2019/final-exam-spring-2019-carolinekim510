cmake_minimum_required (VERSION 3.8)
project(09_recursion_library)

add_library(09_recursion_library "recursion.cpp" "recursion.h")
add_executable(09_recursion_exe "main.cpp" "recursion.cpp")





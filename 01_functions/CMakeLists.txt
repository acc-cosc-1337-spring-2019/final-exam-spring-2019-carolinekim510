cmake_minimum_required (VERSION 3.8)
project(01_functions_library)

add_library(01_functions_library "functions.cpp" "functions.h")
add_executable(01_functions_exe "main.cpp" "functions.cpp")





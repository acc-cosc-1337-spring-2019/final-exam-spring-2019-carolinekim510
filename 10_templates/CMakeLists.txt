cmake_minimum_required (VERSION 3.8)
project(10_templates_library)

add_library(10_templates_library "list.cpp" "list.h")
add_executable(10_templates_exe "main.cpp" "list.cpp")





cmake_minimum_required (VERSION 3.8)
project(04_class_copy_library)

add_library(04_class_copy_library "account.cpp" "account.h")
add_executable(04_class_copy_exe "main.cpp" "account.cpp")





cmake_minimum_required (VERSION 3.8)
project(03_overload_library)

add_library(03_overload_library "account.cpp" "account.h")
add_executable(03_overload_exe "main.cpp" "account.cpp")





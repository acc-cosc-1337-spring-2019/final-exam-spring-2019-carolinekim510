cmake_minimum_required (VERSION 3.8)
project(02_account_library)

add_library(02_account_library "account.cpp" "account.h")
add_executable(02_account_exe "main.cpp" "account.cpp")





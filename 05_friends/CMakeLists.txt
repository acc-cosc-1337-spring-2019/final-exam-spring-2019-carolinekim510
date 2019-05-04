cmake_minimum_required (VERSION 3.8)
project(05_friends_library)

add_library(05_friends_library "account.cpp" "account.h")
add_executable(05_friends_exe "main.cpp" "account.cpp")





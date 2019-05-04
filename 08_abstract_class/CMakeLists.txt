cmake_minimum_required (VERSION 3.8)
project(08_abstract_class_library)

add_library(08_abstract_class_library "account.cpp" "account.h"
                 "checking_account.cpp" "checking_account.h"
				 "savings_account.cpp"  "savings_account.h")
add_executable(08_abstract_class_exe "main.cpp" "account.cpp"
               "checking_account.cpp" "savings_account.cpp")





#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "01_functions/functions.h"

/*
Create a test case with 3 local variables of type int val, ref, and ptr with values 5, 10, and 15.
call the function pass_by_val_ref_ptr with parameter arguments val, ref, and ptr.
	  After  function call:
		 Assert that local variable val is 50.
		 Assert that local variable ref is 100.
		 Assert that local variable ptr is 150.

*/
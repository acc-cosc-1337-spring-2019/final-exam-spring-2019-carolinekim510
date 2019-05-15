#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "04_class_copy/account.h"

TEST_CASE("Test account copy") 
{
	Account a(50);
	Account b = a;
	REQUIRE(a.get_balance() == 50);
	REQUIRE(b.get_balance() == 50);

	a.deposit(5);

	REQUIRE(a.get_balance() == 55);
	REQUIRE(b.get_balance() == 50);
}
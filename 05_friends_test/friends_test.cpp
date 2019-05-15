#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "05_friends/account.h"

TEST_CASE("Account Test operator + overload") 
{
	Account a(50);
	Account b(100);

	Account c = a + b;
	REQUIRE(c.get_balance() == 150);
}
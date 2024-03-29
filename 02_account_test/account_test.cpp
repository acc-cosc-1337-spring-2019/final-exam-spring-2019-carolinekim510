#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "02_account/account.h"

/*
Create a test case to show that an Account with begin balance 500 has a balance of 500(create an Assertion).
	 Assert a deposit of 25 brings balance to 525.
	 Assert a withdraw of 50 leaves ending balance of 475.


*/
TEST_CASE("Test Account") 
{
	Account account(500);
	REQUIRE(account.get_balance() == 500);
	account.deposit(25);
	REQUIRE(account.get_balance() == 525);
	account.withdraw(50);
	REQUIRE(account.get_balance() == 475);
}



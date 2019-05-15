#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <memory>

#include "06_inheritance/checking_account.h"
#include "06_inheritance/savings_account.h"

TEST_CASE("Inheritance test") 
{
	std::unique_ptr<Account> a = std::make_unique<Account>(150);
	a->deposit(50);
	a->withdraw(100);

	REQUIRE(a->get_balance() == 100);
}
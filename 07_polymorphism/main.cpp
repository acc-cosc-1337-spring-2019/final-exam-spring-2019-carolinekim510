#include "07_polymorphism/checking_account.h"
#include "07_polymorphism/savings_account.h"

#include<vector>
#include <iostream>

int main() 
{
	std::vector<Account*> accounts = {new CheckingAccount(50),
	new SavingsAccount(100)};

	for (auto& a : accounts) 
	{
		std::cout << a->get_balance() << "\n";
	}

	return 0;
}
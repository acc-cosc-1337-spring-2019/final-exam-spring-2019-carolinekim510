#include "06_inheritance/checking_account.h"
#include "06_inheritance/savings_account.h"
#include<vector>
#include<iostream>

int main() 
{
	std::vector<Account> accounts = {CheckingAccount(100), 
		SavingsAccount(50)};

	for (auto a : accounts) 
	{
		std::cout << a<<"\n";
	}

	return 0;
}
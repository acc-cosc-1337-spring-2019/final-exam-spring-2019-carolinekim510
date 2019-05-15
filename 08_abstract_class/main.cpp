#include "08_abstract_class/checking_account.h"
#include "08_abstract_class/savings_account.h"
#include<vector>
#include<iostream>

int main() 
{
	std::vector<Account*> accounts = { new CheckingAccount(50),
		new SavingsAccount(100) };

	for (auto& a : accounts)
	{
		std::cout << a->get_balance() << "\n";
	}

	return 0;
}
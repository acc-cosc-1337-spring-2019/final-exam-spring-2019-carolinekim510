#include "03_overload/account.h"
#include <iostream>
#include <memory>

int main() 
{
	Account* accounts[5];
	for (int i = 1; i < 6; ++i) 
	{
		accounts[i-1] = new Account(i * 100);
	}

	for (int i = 0; i < 5; ++i) 
	{
		std::cout<<*accounts[i]<<"\n";
	}

	std::unique_ptr<Account> u_accounts[5];

	for (int i = 1; i < 6; ++i) 
	{
		u_accounts[i-1] = std::make_unique<Account>(i * 100);
	}

	for (auto& a : u_accounts) 
	{
		std::cout<<*a << "\n";
	}

	return 0;
}
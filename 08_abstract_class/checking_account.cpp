#include "checking_account.h"
#include<iostream>
//
int CheckingAccount::get_balance() const
{
	std::cout << "Checking\n";
	return *balance;
}

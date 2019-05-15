#include "savings_account.h"
#include<iostream>
//

int SavingsAccount::get_balance() const
{
	std::cout << "Saving\n";
	return *balance;
}

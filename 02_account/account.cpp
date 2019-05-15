#include "account.h"
//

void Account::deposit(int a)
{
	if (a > 0) 
	{
		balance += a;
	}
}

void Account::withdraw(int a)
{
	if (a <= balance) 
	{
		balance -= a;
	}
}

int Account::get_balance() const
{
	return balance;
}

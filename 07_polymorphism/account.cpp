#include "account.h"
//

Account::Account(const Account & a)
{
	balance = new int(*a.balance);
}

Account & Account::operator=(Account & a)
{
	delete balance;
	balance = new int(*a.balance);

	return *this;
}

void Account::deposit(int a)
{
	if (a > 0)
	{
		*balance += a;
	}
}

void Account::withdraw(int a)
{
	if (a <= *balance)
	{
		*balance -= a;
	}
}

int Account::get_balance() const
{
	return *balance;
}

Account::~Account()
{
	delete balance;
	balance = nullptr;
}

ostream & operator<<(ostream & out, const Account & a)
{
	out << "Balance: " << a.get_balance();

	return out;
}

Account operator+(const Account & a, const Account & b)
{
	Account account(*a.balance + *b.balance);

	return account;
}

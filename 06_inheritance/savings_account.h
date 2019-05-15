//
#include "06_inheritance/account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount: public Account
{
public:
	SavingsAccount(int b) : Account(b) {}
};

#endif // !SAVINGS_ACCOUNT_H

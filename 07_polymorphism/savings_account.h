//
#include "07_polymorphism/account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount : public Account
{
public:
	SavingsAccount(int b) : Account(b) {}
	int get_balance() const override;
};

#endif // !SAVINGS_ACCOUNT_H

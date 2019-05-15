//
#include "08_abstract_class/account.h"
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public Account
{
public:
	CheckingAccount(int b) : Account(b) {}
	int get_balance() const override;
};

#endif // !CHECKING_ACCOUNT_H

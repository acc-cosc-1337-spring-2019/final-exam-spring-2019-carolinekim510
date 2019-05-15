//
#include "06_inheritance/account.h"
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public Account
{
public:
	CheckingAccount(int b) : Account(b) {}
};

#endif // !CHECKING_ACCOUNT_H

//
#ifndef ACCOUNT_H_03
#define ACCOUNT_H_03
#include<iostream>

using std::ostream;

class Account
{
public:
	Account(int b) : balance(b) {}
	void deposit(int a);
	void withdraw(int a);
	int get_balance()const;
	friend ostream &operator<<(ostream &out, const Account &a);
private:
	int balance;
};

#endif // !ACCOUNT_H_03


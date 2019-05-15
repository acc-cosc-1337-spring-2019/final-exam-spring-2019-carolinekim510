//
#ifndef ACCOUNT_H_03
#define ACCOUNT_H_03
#include<iostream>

using std::ostream;

class Account
{
public:
	Account(int b) { balance = new int(b); }
	Account(const Account& a);
	Account& operator=(Account & a);
	void deposit(int a);
	void withdraw(int a);
	virtual int get_balance()const;
	friend ostream &operator<<(ostream &out, const Account &a);
	friend Account operator+(const Account& a, const Account& b);
	~Account();
protected:
	int* balance;
};

#endif // !ACCOUNT_H_03


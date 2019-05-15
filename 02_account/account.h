//
#ifndef ACCOUNT_H_02
#define ACCOUNT_H_02

class Account 
{
public:
	Account(int b) : balance(b) {}
	void deposit(int a);
	void withdraw(int a);
	int get_balance()const;
private:
	int balance;
};

#endif // !ACCOUNT_H_02


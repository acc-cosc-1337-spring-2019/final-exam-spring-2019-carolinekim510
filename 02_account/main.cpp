#include "02_account/account.h"

int main() 
{
	Account account(500);

	account.deposit(25);
	account.withdraw(50);

	return 0;
}
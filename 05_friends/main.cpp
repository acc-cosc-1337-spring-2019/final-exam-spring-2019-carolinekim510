#include "05_friends/account.h"
#include<iostream>

int main() 
{
	Account* a = new Account(50);
	Account* b = new Account(100);
	Account c = *a + *b;

	std::cout << c;

	delete a;
	a = nullptr;

	delete b;
	b = nullptr;

	return 0;
}
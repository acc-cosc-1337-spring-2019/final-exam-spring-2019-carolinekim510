#include "04_class_copy/account.h"
#include<iostream>

int main() 
{
	/*
	Account* a = new Account(500);
	Account* b = new Account(*a);
	std::cout << *a <<"\n";
	std::cout << *b;

	delete a;
	a = nullptr;

	delete b;
	b = nullptr;
	*/

	Account* a = new Account(100);
	Account* b = new Account(*a);

	std::cout << *a << "\n";
	std::cout << *b << "\n";

	delete a;
	a = nullptr;

	delete b;
	b = nullptr;


	return 0;
}
#include "functions.h"
#include <iostream>
int main() 
{
	int val = 5;
	int ref = 10;
	int* ptr = new int(15);

	pass_by_val_ref_ptr(val, ref, ptr);

	std::cout << val << "\n";
	std::cout << ref << "\n";
	std::cout << *ptr << "\n";

	return 0;
}
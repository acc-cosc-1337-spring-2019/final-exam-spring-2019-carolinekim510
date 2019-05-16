#include "09_recursion/recursion.h"
#include <iostream>
#include <bitset>

int main()
{
	int n = 0;
	for (int i = 0; i <= 255; i++) 
	{
		n = f(i);
		std::cout << std::bitset<i>(n) << "\n";

	}
}
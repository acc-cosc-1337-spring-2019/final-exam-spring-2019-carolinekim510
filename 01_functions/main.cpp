#include "functions.h"

int main() 
{
	int val = 5;
	int ref = 10;
	int* ptr = new int(15);

	pass_by_val_ref_ptr(val, ref, ptr);

	return 0;
}
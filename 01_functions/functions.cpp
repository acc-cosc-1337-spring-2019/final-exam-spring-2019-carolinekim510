#include "functions.h"
//

void pass_by_val_ref_ptr(int val, int & ref, int * ptr)
{
	val = 50;
	ref = 100;
	*ptr = 150;
}

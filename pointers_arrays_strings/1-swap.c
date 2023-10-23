#include"main.h"

/**
 * swap_int -entry point,swaps values
 * @a,b: -hold values for output
 */



	void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}

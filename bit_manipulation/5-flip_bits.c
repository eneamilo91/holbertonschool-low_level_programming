#include"main.h"

/**
 * flip_bits -interchanges the bits of 2 numbers
 * @m: -holds value for output
 * @n: -holds value for output
 * Return: (count)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count = 0;

	x = n ^ m;

	while (x != 0)
	{
		if ((x & 1) == 1)
			count++;
		x = x >> 1;
	}
	return (count);
}

#include"main.h"

/**
 * clear_bit -changes value of bit
 * @n: -points to number
 * @index: -holds value for output
 * Return: (1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int helper = *n;

	if (index > sizeof(n) * 8)
		return (-1);

	if ((helper >> index & 1) == 1)
		*n = *n ^ 1 << index;

	return (1);
}

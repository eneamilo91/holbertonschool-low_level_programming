#include"main.h"

/**
 * set_bit -sets bit to 1
 * @n: -points to respective value
 * @index: -holds value for output
 * Return: (1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}

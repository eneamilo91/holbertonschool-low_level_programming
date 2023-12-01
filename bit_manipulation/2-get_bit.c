#include"main.h"

/**
 * get_bit - gets git value at specific index
 * @index: -holds value for output
 * @n: -holds value for output
 * Return: (a >> index & 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}

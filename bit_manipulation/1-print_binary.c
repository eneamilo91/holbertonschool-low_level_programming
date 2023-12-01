#include"main.h"

/**
 * print_binary -prints the binary rap of a nr
 * @n: -holds value for output
 */

void print_binary(unsigned long int n)
{
	if (n >> 1 == 0)
		_putchar('0' + (n & 1));
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}

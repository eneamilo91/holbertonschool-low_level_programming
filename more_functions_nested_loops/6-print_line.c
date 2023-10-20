#include"main.h"

/**
 * print_line -entry point,draws a straight line
 * @n: -hold value for input
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

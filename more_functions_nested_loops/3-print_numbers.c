#include"main.h"

/**
 * print_numbers -entry point.Prints digits
 * @a: -holds value for input
 */
void print_numbers(void)
{
	int a = 0;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(a + '0');
	}

	_putchar('\n');
}

#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

	void print_to_98(int n, int x)
{


	for (n = x; (x <= 98 && x <= 0);x++)
	{
		if (x != 98)
		{

			_putchar(',');
			_putchar(' ');
		}

		_putchar(x + '0');
		_putchar('\n');

	}
	for (n = x;x >=98;x--)
	{
		if (x != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(x + '0');
		_putchar('\n');
	}

}

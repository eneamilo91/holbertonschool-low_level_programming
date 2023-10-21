#include"main.h"

/**
 * print_triangle -entry point,prints a triangle using char
 * @size: -hold the value for output
 */

	void print_triangle(int size)
{
	int a = 0;
	int b = 0;
	int y;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (a = 0; a < size - 1 - b; a++)
			{
				_putchar(' ');

			}
			for (b = 0; b <= size - 1 - a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

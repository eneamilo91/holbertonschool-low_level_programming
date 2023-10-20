#include"main.h"

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			while (i < n)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}

}

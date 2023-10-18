#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

	void jack_bauer(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0;j <= 9;j++)
		{
			for (x = 0;x <= 5;x++)
			{
				for (y = 0;y <= 9;y++)
				{
					if (i == 2 && j == 3 && x == 5 && y == 9)
					{
						break;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar('\n');
				
				}


			}


		}


	}




























}

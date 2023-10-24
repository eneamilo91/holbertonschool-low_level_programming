#include"main.h"

/**
 * puts_half -entry point,prints half s
 * @str: -holds value for input
 */


void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	j = (i - 1) / 2;

	for (j = (i - 1) / 2 + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

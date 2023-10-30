#include"main.h"

/**
 * _puts_recursion -entry point,prints string
 * @s: -holds value for output
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}

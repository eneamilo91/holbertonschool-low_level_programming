#include"main.h"

/**
 * _print_rev_recursion -entry point,print rev string
 * @s: -holds value for output
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

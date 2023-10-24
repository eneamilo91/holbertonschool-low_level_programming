#include"main.h"
/**
 * _puts -entry point,prints a newline  f string
 * @str:-holds value or input
 */


	void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

	}
_putchar('\n');
}

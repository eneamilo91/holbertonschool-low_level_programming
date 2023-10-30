#include"main.h"

/**
 * _strlen_recursion -entry point,returns length of string
 * @s: -holds value for output
 * Return: (1 + _strlen_recursion(s + 1))
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

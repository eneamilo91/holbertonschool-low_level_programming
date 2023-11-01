#include"main.h"

/**
 * _memset -entry point,fills memory
 * @s: -points to specific array
 * @b: -holds value for output
 * @n: -holds value for output
 * Return: (s)
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);

}

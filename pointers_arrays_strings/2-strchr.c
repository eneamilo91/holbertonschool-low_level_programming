#include"main.h"
#include <stddef.h>

/**
 * _strchr -entry point searches for character in str
 * @s: -string array to hold values
 * @c: -holds value for output
 * Return: NULL
 */


char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
		return ("");

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

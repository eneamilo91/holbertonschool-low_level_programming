#include"main.h"

/**
 * _strcpy -entry point,copys two strings
 * @dest: -points to value for input
 * @src: -points to value for input
 * Return: ptr
 */


char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);

}

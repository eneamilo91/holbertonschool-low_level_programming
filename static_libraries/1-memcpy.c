#include "main.h"

/**
 * _memcpy -entry point,copies memory area
 * @dest: -points to specific array
 * @src: -points to specific array
 * @n: -holds value for input
 * Return: (s)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

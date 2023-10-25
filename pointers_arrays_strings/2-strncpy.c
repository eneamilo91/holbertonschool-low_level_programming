#include"main.h"
/**
 * _strncpy -entry point,capies a string
 * @dest: -holds value for output
 * @src:  -holds value for output
 * @n:- holds value for output
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	char *ptr;

	ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	j++;
	}

	src[j] = '\0'; 

	return (ptr);
}

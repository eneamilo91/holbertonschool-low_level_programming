#include"main.h"

/**
 * _strcat -entry point,concat two strings
 * @dest: -holds value for output
 * @src: -holds value for output
 * Return: (ptr)
 */



char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *ptr;

	ptr = dest;


	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (src[j] != '\0')
	{
	dest[i + j] = src[j];
	j++;
	}


	dest[i + j] = '\0';

	return (ptr);
}

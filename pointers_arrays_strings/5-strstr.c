#include"main.h"
#include <stddef.h>

/**
 * _strstr -entry point,locates a substring
 * @haystack: -holds value for input
 * @needle: -holds value for input
 * Return: (NULL)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}


		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}

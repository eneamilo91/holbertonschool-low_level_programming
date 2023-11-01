#include "main.h"

/**
 *_strcpy - fgh
 *@dest: gfvh
 *@src: stfygu
 *Return: ptr
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

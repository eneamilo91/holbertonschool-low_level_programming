#include"main.h"
#include<string.h>

/**
 * binary_to_uint -converts binary to int
 * @b: -points to correspondin bit
 * Return: (number)
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number = 0;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			number = number + (1 << len);
		len--;
	}
	return (number);
}

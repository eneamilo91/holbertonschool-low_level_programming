#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

	void print_to_98(int n)
{
	if(n > 98)
	{
		while(n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	if(n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}

	printf("98\n");
}


	

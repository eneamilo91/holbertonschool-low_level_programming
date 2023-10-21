#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -entry point,check for chars 
 * @c: the character to check
 */ 

	void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d,", n);
			n--;
		}
	}

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d,", n);
			n++;
		}
	}

	printf("98\n");
}

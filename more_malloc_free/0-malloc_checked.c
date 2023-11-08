#include"main.h"
#include<stdlib.h>

/**
 * malloc_checked -entry point,allocates memory using malloc
 * @b: -holds value for output
 * Return: (ptr)
 */


void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

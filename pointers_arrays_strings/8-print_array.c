#include"main.h"
#include<stdio.h>
/**
 * print_array -entry point,prints elements of array
 * @a: -points to value for input
 * @n: -hold value for input
 */

#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

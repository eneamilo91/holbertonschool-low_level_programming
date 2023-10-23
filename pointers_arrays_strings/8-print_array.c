#include"main.h"
#include<stdio.h>
/**
 * print_array -entry point,prints elements of array
 * @a: -points to value for input
 * @n: -hold value for input
 */ 


	void print_array(int *a, int n)
{	
	int a[n];
	
	for (n = 0; a[n] != '\0'; n++)
	{
		printf("%d", a[n]);
		printf(",");
		printf(" ");
	
	
	}

}

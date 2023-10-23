#include"main.h"
#include<stdio.h>
/**
 * print_array -entry point,prints elements of array
 * @a: -points to value for input
 * @n: -hold value for input
 */ 


	void print_array(int *a, int n)
{	
	int array[n];
	
	for (n = 0; array[n] != '\0'; n++)
	{
		printf("%d", array[n]);
		printf(",");
		printf(" ");
	
	
	}

}

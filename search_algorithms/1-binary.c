#include<stdio.h>
#include"search_algos.h"

void print_array(int *array, size_t size)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("%d", array[i]);
		if (i < (int)size - 1)
			printf(", ");
	}
	printf("\n");
}


int binary_algorithm(int *array, int min_index, int max_index, int value)
{
	size_t mid;

	if (min_index <= max_index)
	{
		mid = (min_index + max_index)/2;
		print_array(array, max_index - min_index + 1);
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			return (binary_algorithm(array, min_index, mid - 1, value));
		else
			return (binary_algorithm(array, mid + 1, max_index, value));
	}
	return (-1);
}

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_algorithm(array, 0, size - 1, value));
}

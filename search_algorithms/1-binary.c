#include<stdio.h>
#include"search_algos.h"

/**
 * print_array -prints an array of integers
 * @array: -points to the array
 * @size: -the size of the array
 */

void print_array(int *array, size_t size)
{
	int i;

	printf("Searching in array: ");

	for (i = 0; i < (int)size; i++)
	{
		printf("%d", array[i]);
		if (i < (int)size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_algorithm -searches for the value
 * @array: -points to the array
 * @min_index: -the minimum index
 * @max_index: -the maximum index
 * @value: -the value to be checked
 * Return: (binary_algorithm(array, mid + 1, max_index, value)
 */


int binary_algorithm(int *array, int min_index, int max_index, int value)
{
	size_t mid;

	if (min_index <= max_index)
	{
		print_array(array + min_index, max_index - min_index + 1);
		mid = (min_index + max_index) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			return (binary_algorithm(array, min_index, mid - 1, value));
		else
			return (binary_algorithm(array, mid + 1, max_index, value));
	}
	return (-1);
}

/**
 * binary_search -searches for a value in an array
 * @array: -points to the array of integers
 * @size: -the size of the array
 * @value: -the value to be checked
 * Return: (binary_algorithm(array, 0, size - 1, value)
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_algorithm(array, 0, size - 1, value));
}

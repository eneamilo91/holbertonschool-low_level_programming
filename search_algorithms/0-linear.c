#include<stdio.h>

/**
 * linear_search -searches linearly in an array of integers
 * @array: -points to the array
 * @size: -size of the array
 * @value: -value to be checked
 * Return: (i)
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}

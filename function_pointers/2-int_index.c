#include"function_pointers.h"
#include<stddef.h>


/**
 * int_index -entry point,searches for an int
 * @array: -points to the respective array
 * @size: -holds value for output
 * @cmp: -points to the respective func
 * Return: (i)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{

		if (cmp(*(array + i)))
			break;
	}
		if (i == size)
			return (-1);

	return (i);
}

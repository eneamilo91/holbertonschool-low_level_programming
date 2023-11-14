#include"function_pointers.h"
#include<stddef.h>

/**
 * array_iterator -entry point,executes a function
 * @array: -points to the respective array
 * @size: -holds value for output
 * @action: -points to the respective funct
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}

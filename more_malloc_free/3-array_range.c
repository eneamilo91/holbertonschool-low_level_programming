#include"main.h"
#include<stdlib.h>


/**
 * array_range -entry point,creates an array of integers
 * @min: -holds value for output
 * @max: -holds value for output
 * Return: (a)
 */


int *array_range(int min, int max)
{
	int i;
	int *a = malloc((max - min + 1) * sizeof(int));

	if (min > max)
		return (NULL);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		*(a + i) = min;
		min = min + 1;
	}
	return (a);
}

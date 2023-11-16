#include<stdarg.h>
#include<stdio.h>

/**
 * sum_them_all -entry point,returns sum
 * @n: -holds value for output
 * Return: (sum)
 */

int sum_them_all(const unsigned int n, ...)
{
	 unsigned int i;
	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}

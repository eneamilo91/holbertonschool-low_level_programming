#include"main.h"

/**
 * factorial -entry point,return factorial of number
 * @n: -holds value for output
 * Return: (i * factorial(i - 1))
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (i * factorial(i - 1));
}

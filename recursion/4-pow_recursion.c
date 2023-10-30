#include"main.h"

/**
 * _pow_recursion -entry point,return x in pow of y
 * @x: -holds value for output
 * @y: -holds value for output
 * Return: (x * _pow_recursion(x, y - 1))
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}

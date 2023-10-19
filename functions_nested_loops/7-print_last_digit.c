#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the int to extract the last digit from
 * Return: value of the last digit
 */

	int print_last_digit(int x)
{
	if (x >= 0)
	{	
		
		return (x % 10);
	}
	else
	{	
		
	
		return (-(x % 10));
	}
	
}

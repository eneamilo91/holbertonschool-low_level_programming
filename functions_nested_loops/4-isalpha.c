#include"main.h"

/**
 * _isalpha - checks for an alphabetic character; in the standard "C" locale
 * @c: the character to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)

{
	if ((97 <= c &&  122 >= c) || (65 <= c && 90 >= c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

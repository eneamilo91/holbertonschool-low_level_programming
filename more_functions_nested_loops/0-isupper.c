#include"main.h"

/**
 * _isupper - check for uppercase letters
 * @c: -variable int c check character
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if ((c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

#include"main.h"
/**
 * _atoi -entry point,convert a string to integer
 * @s: -holds value for output
 * Return: (sign * number)
 */


int _atoi(char *s)
{
	int i;
	int sign = 1;
	unsigned int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0' + number * 10;
		}
		else if (number > 0)
			break;
	}
	return (sign * number);

}

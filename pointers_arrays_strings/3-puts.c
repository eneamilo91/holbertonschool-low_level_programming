#include"main.h"


	int _strlen(char *str)
{
	int i;

	for (i = 0 ; str[i]!= '\0'; i++)
	{
		_putchar(str[i]);			
	
	}
	return (i);
}

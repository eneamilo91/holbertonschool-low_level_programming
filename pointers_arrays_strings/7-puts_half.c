#include"main.h"


	void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0;str[i] != '\0'; i++)
	{

	}
	j= (i - 1) / 2;

	for (j = (i - 1) / 2; str[j] != '\0'; j++)
	{
		if (j % 2 != 0)
        		_putchar(str[j]);
     	}
	_putchar('\n');
}

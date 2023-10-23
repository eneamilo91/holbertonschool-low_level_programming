#include"main.h"


	void puts2(char *str)
{
	int i;

	for (i = 0;str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	
	}

	_putchar('\n');
}

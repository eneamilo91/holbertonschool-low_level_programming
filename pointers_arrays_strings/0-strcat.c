#include"main.h"



char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *ptr;
	ptr = &dest;

	for (i = 0; dest[i] == '\0'; i++)
	{
	
	}
	j=i;
	while (j != '\n')
	{
		_putchar('src[j]');
		j++;

	}
	return (*ptr);

}

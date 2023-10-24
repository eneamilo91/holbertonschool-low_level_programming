#include"main.h"



char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;
    char *ptr;
    ptr = dest;

    
    for (i = 0; dest[i] != '\0'; i++)
    {
    }

    j = 0;
    
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

	if (j >= n)
	{
		break;
	}
		
	return ptr;
}


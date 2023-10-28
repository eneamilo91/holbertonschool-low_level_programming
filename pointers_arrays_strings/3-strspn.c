#include"main.h"

unsigned int _strspn(char *s, char *accept)
{
    int i;
    int j;
    int count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }
        if (accept[j] == '\0')
        {
            break;
        }
    }
    return (count);
}


#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function is the entry point for the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    char alphabet[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'
    };
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    int j;

    for (i = 0; i < 26; i++)
    {
        putchar(alphabet[i]);
    }
    
    for (j = 0; j < 26; j++) 
    {
        putchar(upper[j]);
    }
    putchar('\n');

    return (0);
}



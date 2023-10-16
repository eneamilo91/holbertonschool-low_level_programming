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
	char hexa[] = "0123456789abcdef";   
	int x;
	
	for (x = 0; x < 16; x++)
{
		putchar(hexa[x]);
		
}

	putchar('\n');

	return (0);
}


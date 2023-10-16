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
	int i;
	int j;
	
	for (i = 0; i <= 9; i++)
{
		for (j = 0; j < 10; j++)
{			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
}
}

	return (0);
}


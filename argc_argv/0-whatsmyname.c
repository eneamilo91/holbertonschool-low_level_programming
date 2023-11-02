#include<stdio.h>

/**
 * main -entry point,program that prints its name
 * @argc: -holds value for output
 * @argv: -holds value for output
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

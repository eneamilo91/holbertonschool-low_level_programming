#include<stdio.h>

/**
 * main -entry point,program that prints all
 * @argc: -holds value for output
 * @argv: -holds value for output
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

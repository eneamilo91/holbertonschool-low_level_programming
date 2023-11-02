#include<stdio.h>

/**
 * main -entry point,program that prints nr of args
 * @argc: -holds value for output
 * @argv: -holds value for output
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

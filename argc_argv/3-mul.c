#include<stdio.h>
#include<stdlib.h>


/**
 * main -entry point,multiplies two numbers
 * @argc: -holds value for output
 * @argv: -holds value for output
 * Return: 0
 */

int main(int argc, char *argv[])
{
	long int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%ld\n", res);
	return (0);
}

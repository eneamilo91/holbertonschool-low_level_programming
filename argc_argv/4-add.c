#include<stdio.h>
#include<stdlib.h>

/**
 * main -entry point,adds positive nr
 * @argc: -holds value for output
 * @argv: -holds value for output
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);

	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

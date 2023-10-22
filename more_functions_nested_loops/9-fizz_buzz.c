#include<stdio.h>

/**
 * main -entry point
 * Return: 0
 */


	int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}

		else if (x % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}

		else if (x % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (x != 100 && x % 3 != 0 && x % 5 != 0 && (x % 3 != 0 && x % 5 != 0))
		{
			printf("%d", x);
			printf(" ");
		}
		else
			printf("%d", x);
	}
	printf("\n");
	return (0);
}

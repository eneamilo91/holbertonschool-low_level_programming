#include"main.h"
#include<stdio.h>

/**
 * fizzBuzz -entry point,prints numbers 0 - 100
 */

	void FizzBuzz(void)
{
	int x;

   	 for(x = 1; x <= 100; x++)
    {
        	if (x % 3 == 0 && x % 5 == 0)
        {
            		printf("FizzBuzz");
            		putchar(' ');
        }
    
        	else if (x % 5 == 0)
        {
            		printf("Buzz");
            		putchar(' ');
        }

        	else if (x % 3 == 0 )
        {
            		printf("Fizz");
            		putchar(' ');
        }

        	else
        {
            		printf("%d", x);
            		putchar(' ');
        }

    }
   putchar('\n');	
}


































}

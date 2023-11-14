#include"function_pointers.h"
#include<stdio.h>

/**
 * f -entry point,creates string
 * @str: -points to the respective array
 */

void f(char *str)
{
	printf("%s\n", str);
}

/**
 * print_name -entry point,prints a name
 * @name: -points to the respective value
 * @f: -points to the respective function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<string.h>

/**
 * print_all -entry point,prints everything
 * @format: -points to the respective array
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *separator = ",";
	int size = format == NULL ? 0 : strlen(format);
	va_list ptr;

	va_start(ptr, format);

	if (size != 0)
	{
		while (*(format + i) != '\0')
		{
			switch (*(format + i))
			{
				case 's':
					str = va_arg(ptr, char*);

					if (str != NULL)
					{
						printf("%s%s", str, i == size - 1 ? "" : separator);
						break;
					}
						printf("(nil)%s", i == size - 1 ? "" : separator);
						break;
				case 'i':
						printf("%d%s", va_arg(ptr, int), i == size - 1 ? "" : separator);
						break;
				case 'f':
						printf("%f%s", va_arg(ptr, double), i == size - 1 ? "" : separator);
						break;
				case 'c':
						printf("%c%s", va_arg(ptr, int), i == size - 1 ? "" : separator);
						break;
				default:
						break;
			}
			i++;
		}
	}
	va_end(ptr);
	printf("\n");
}

#include"main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)

{
	char letter;
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (letter = 'a'; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

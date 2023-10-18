#include"main.h"

/**
 * 3-islower.c - Entry point
 * Return:0
 */

int _islower(int c)

{
	if (97 <= c && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

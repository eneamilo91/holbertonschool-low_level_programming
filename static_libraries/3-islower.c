#include "main.h"

/**
 *  * _islower - Entry point
 *   * ctype.h header file
 *    * @c: is parameter
 *     * Return:0
 */

int _islower(int c)
{
	if (c < 96 && c < 123)
		return (0);
	else
		return (1);
}

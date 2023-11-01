#include "main.h"

/**
 *  * _isalpha - Entry point
 *   * ctype.h header file
 *    * @c: is parameter
 *     * Return:0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

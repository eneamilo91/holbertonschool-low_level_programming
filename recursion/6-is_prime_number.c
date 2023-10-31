#include "main.h"

/**
*is_prime - acsas
*@n: aasca
*@i: aecdfc
*Return: asx
*/

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	else
		return  (is_prime(n, i + 1));
}

/**
 *is_prime_number - sdca
 *@n: adcsc
 *Return: adc
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

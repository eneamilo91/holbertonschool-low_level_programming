#include <stdio.h>
#include "3-calc.h"

iint main(void)
{
	int calc[];
	char num1[] = atoi(num1);
	char operator[] = {'+','-','*','/','%'};
	char num2[] = atoi(num2);

	calc = {atoi(num1) + atoi(num2),atoi(num1) - atoi(num2),atoi(num1) * atoi(num2),atoi(num1) / atoi(num2),atoi(num1) % atoi(num2)};

	printf("%d\n",calc[0]);
	printf("%d\n",calc[1]);
	printf("%d\n",calc[2]);
	printf("%d\n",calc[3]);
	printf("%d\n",calc[4]);



}

#include"main.h"
#include<stdlib.h>


/**
 * string_nconcat -entry point,concatenates two strings
 * @s1: -points to the respective string
 * @s2: -points to the respective string
 * @n: -holds value for output
 * Return: (concat)
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		s1len++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		s2len++;
	if (n < s2len)
		s2len = n;
	concat = malloc(s1len + s2len + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(concat + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
		*(concat + i + j) = *(s2 + j);
	*(concat + i + j) = '\0';
	return (concat);
}

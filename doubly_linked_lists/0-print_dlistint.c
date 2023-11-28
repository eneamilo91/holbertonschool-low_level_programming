#include"lists.h"
#include<stdio.h>

/**
 * print_dlistint -prints all elements
 * @h: -points to the first node
 * Return: (count)
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

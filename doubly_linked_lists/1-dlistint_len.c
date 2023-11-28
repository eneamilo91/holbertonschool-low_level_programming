#include"lists.h"

/**
 * dlistint_len -prints the number of nodes
 * @h: -points to the first node
 * Return: (count)
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

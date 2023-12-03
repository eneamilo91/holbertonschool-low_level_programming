#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at idx position
 * @h: first node
 * @idx: index where the node should be added
 * @n: value to add to the new node
 * Return: adress of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *tmp;
	unsigned int count;

	new_n = malloc(sizeof(dlistint_t));
	tmp = *h;

	if (new_n == NULL)
		return (NULL);
	new_n->n = n;

	if (idx == 0 || (*h) == NULL)
		return (add_dnodeint(h, n));
	{
		for (count = 0; count < idx - 1; count++)
		{
			if (tmp->next == NULL && count < idx)
				return (NULL);

			tmp = tmp->next;
		}
		if (tmp->next == NULL)
			return (add_dnodeint_end(h, n));

		new_n->next = tmp->next;
		new_n->prev = tmp;
		tmp->next->prev = new_n;
		tmp->next = new_n;
		return (new_n);
	}
	return (NULL);
}

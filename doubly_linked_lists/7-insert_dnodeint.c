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
	dlistint_t *new, *virtual;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	virtual = *h;

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0 || (*h) == NULL)
		return (add_dnodeint(h, n));
	{
		for (count = 0; count < idx - 1; count++)
		{
			if (virtual->next == NULL && count < idx)
				return (NULL);

			virtual = virtual->next;
		}
		if (virtual->next == NULL)
			return (add_dnodeint_end(h, n));

		new->next = virtual->next;
		new->prev = virtual;
		virtual->next->prev = new;
		virtual->next = new;
		return (new);
	}
	return (NULL);
}

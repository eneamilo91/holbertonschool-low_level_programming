#include"lists.h"
#include<stdlib.h>

/**
 * insert_dnodeint_at_index -inserts node at specific index
 * @h: -points to the head node
 * @idx: -holds value for output
 * @n: -holds value for output
 * Return: (new)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *virtual = *h;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			new->next = NULL;
			new->prev = NULL;
			return (new);
		}
		else
			return (NULL);
	}
	else
	{
		while (virtual != NULL)
		{
			if (idx == 0)
			{
				new->next = virtual;
				virtual->prev = new;
				new->prev = NULL;
				*h = new;
				return (new);
			}
			else
			{
				if (i == idx - 1)
				{
					new->next = virtual->next;
					new->prev = virtual;
					if (virtual->next != NULL)
						virtual->next->prev = new;
					virtual->next = new;
					return (new);
				}
			}
			i++;
			virtual = virtual->next;
		}
		return (NULL);
	}
}

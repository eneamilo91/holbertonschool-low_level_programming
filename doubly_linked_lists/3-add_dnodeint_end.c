#include"lists.h"
#include<stdlib.h>

/**
 * add_dnodeint_end -adds new nod at the end
 * @head: -points to the respective structure
 * @n: -holds value for output
 * Return: (new)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *virtual = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		while (virtual->next != NULL)
		{
			virtual = virtual->next;
		}
		virtual->next = new;
		new->next = NULL;
		new->prev = virtual;
	}
	return (new);
}

#include"lists.h"
#include<stdlib.h>

/**
 * add_dnodeint -add a new node
 * @head: -points to the respective structure
 * @n: -holds value for output
 * Return: (new)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	new->prev = NULL;

	return (new);
}

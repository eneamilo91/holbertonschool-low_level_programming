#include"lists.h"
#include<stdlib.h>

/**
 * delete_dnodeint_at_index -deletes node at specific index
 * @head: -points to the head node
 * @index: -holds value for output
 * Return: (1)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *virtual = *head;

	if (virtual == NULL)
		return (-1);
	if (index == 0)
	{
		*head = virtual->next;
		if (virtual->next != NULL)
			virtual->next->prev = NULL;
		free(virtual);
		return (1);
	}
	while (virtual != NULL && i < index)
	{
		virtual = virtual->next;
		i++;
	}
	if (virtual == NULL)
		return (-1);
	virtual->prev->next = virtual->next;
	if (virtual->next != NULL)
		virtual->next->prev = virtual->prev;
	free(virtual);

	return (1);
}

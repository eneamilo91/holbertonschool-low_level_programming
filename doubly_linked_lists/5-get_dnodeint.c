#include"lists.h"

/**
 * get_dnodeint_at_index -returns nth node pointer
 * @head: -points to the first node
 * @index: -holds value for output
 * Return: (head)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}

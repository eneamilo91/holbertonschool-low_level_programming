#include"lists.h"
#include<string.h>
#include<stdlib.h>

/**
 * add_node_end -adds node at the end
 * @head: -points to the respective structure
 * @str: -points to respective string
 * Return: (new)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}


	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}

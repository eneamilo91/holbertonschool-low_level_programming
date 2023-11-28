#include"lists.h"
#include<string.h>
#include<stdlib.h>

/**
 * add_node -adds a new node
 * @head: -points to the first node
 * @str: -points to string input
 * Return: (new)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}

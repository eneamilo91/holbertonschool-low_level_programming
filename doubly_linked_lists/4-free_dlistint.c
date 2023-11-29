#include"lists.h"
#include<stdlib.h>

/**
 * free_dlistint -function that frees list
 * @head: -points to the first structure
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *helper;

	while (head != NULL)
	{
		helper = head;
		head = head->next;
		free(helper);
	}
}

#include"lists.h"
#include<stdlib.h>

/**
 * free_list -frees the sll
 * @head: -points to the first node
 */

void free_list(list_t *head)
{
	list_t *helper;

	while (head != NULL)
	{
		helper = head;
		head = head->next;
		free(helper->str);
		free(helper);
	}
}

#include"lists.h"
#include<stdio.h>
#include<stddef.h>

/**
 * print_list -prints singly linked list
 * @h: -points to the respective structure
 * Return: (count)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	int len;

	while (h != NULL)
	{
		count++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			for (len = 0; h->str[len] != '\0'; len++)
			{

			}

			printf("[%d] %s\n", len, h->str);
		}
		h = h->next;
	}
	return (count);
}

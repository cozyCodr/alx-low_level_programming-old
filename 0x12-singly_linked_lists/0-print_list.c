#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints the elements of each node in a list
 * @h: pointer to the first node, essentially the head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count += 1;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count += 1'
	}
	return (count);
}

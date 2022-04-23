#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of items in a singly linked list
 * @h: pointer to address of a first item on list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t count;
	list_t *ptr;

	count = 0;
	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

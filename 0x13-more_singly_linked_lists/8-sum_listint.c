#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns sum of element n in all nodes
 * @head: head of list
 * Return: sum of n's
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		count++;
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

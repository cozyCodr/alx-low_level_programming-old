#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node to the head  of the list
 * @head: pointer to head of list
 * @n: node data
 * Return: address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->next = (*head);
	new->n = n;

	(*head) = new;

	if (head == &new)
		return (new->next);
	return (NULL);
}

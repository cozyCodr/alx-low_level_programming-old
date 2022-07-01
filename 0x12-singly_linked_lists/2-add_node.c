#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds node to the start of the list
 * @head: head of the list
 * @str: string field of struct list_s
 * Return: head of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (*head == NULL && str != NULL)
	{
		*head = malloc(sizeof(list_t));
		(*head)->str = strdup(str);
		(*head)->next = NULL;
		return (*head);
	}
	else if (str == NULL)
		return (NULL);

	temp = (list_t *)malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->next = (*head);

	(*head) = temp;

	return (*head);

}

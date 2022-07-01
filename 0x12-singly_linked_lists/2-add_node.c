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
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->next = NULL;
		(*head)->len = strlen(str);
		return (*head);
	}
	else if (str == NULL)
		return (NULL);

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = (*head);
	temp->len = strlen(str);

	(*head) = temp;

	return (*head);

}

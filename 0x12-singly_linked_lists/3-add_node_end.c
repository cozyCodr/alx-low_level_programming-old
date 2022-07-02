#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node to the end of the list
 * @head: head of the list
 * @str: string field of struct list_s
 * Return: head of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *current;

	if (*head == NULL && str != NULL)
	{
		*head = malloc(sizeof(list_t));
		current = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->next = NULL;
		(*head)->len = strlen(str);

		current = (*head);

		return (*head);
	}
	else if (str == NULL)
		return (NULL);

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = NULL;
	temp->len = strlen(str);

	current->next = temp;
	current = temp;

	return (*head);

}

#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen - length
 * @str: string
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int j;

	for (j = 0 ; str[j]; j++)
		;
	return (j);
}

/**
 * add_node_end - new node
 * @head: pointer
 * @str: string
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (new);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}

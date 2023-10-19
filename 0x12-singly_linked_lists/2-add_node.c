#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function
 * @s: char
 * Return: i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node
 * @head: head of list
 * @str: value of element
 * Return: numner of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

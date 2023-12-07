#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: pointer
 * @n: data
 * Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

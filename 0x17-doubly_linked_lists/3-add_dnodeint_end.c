#include "lists.h"

/**
 * add_dnodeint_end - nodes in linked list
 * @head: pointer
 * @n: data
 * Return: nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new;
	return (new);
}

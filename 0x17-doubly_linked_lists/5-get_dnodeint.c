#include "lists.h"

/**
 * get_dnodeint_at_index - certain index
 * @head: node
 * @index: node to return
 * Return: pointer or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

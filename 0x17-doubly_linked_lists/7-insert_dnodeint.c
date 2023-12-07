#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node
 * @h: pointer
 * @idx: index
 * @n: data
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp = *h;

	new = malloc(sizeof(dlistint_t));

	if (!new || !h)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}

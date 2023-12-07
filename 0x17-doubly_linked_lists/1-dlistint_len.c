#include "lists.h"

/**
 * dlistint_len - number of elements
 * @h: linked list
 * Return: nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

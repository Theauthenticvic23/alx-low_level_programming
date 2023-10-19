#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * list_len - alx school
 * @h: list
 * Return: nodes
 */

size_t list_len(const list_t *h)
{
	int jump = 0;

	while (h)
	{
		jump++;
		h = h->next;
	}
	return (jump);
}

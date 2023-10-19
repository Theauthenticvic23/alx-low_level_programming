#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list - school students
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int jump = 0;

	while (h)

	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		jump++;
		h = h->next;
	}
	return (jump);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - school students
 * @h: list
 * Return: nothing
 */
size_t print_list(const list_t *h)
{
	int jump = 0;

	while (h)

	{
		if (h->str == NULL)
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

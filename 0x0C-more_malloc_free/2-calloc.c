#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to run
 * @nmemb: argument
 * @size: argument
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int y = 0, z = 0;
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = nmemb * size;
	r = malloc(z);
	if (r == NULL)
		return (NULL);
	while (y < z)
	{
		r[y] = 0;
		y++;
	}
	return (r);
}

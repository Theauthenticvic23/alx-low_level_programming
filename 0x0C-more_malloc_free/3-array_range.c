#include "main.h"
#include <stdlib.h>

/**
 * array_range - range function
 * @min: argument
 * @max: argument
 *
 * Return: nothing
 */

int *array_range(int min, int max)
{
	int *c, m = 0;

	if (min > max)
		return (NULL);

	c = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (c == NULL)
		return (NULL);
	while (min <= max)
	{
		c[m] = min;
		m++;
		min++;
	}
	return (c);
}

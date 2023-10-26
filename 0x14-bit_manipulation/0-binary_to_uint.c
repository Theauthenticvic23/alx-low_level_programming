#include "main.h"

/**
 * binary_to_uint - function
 * @b: pointer
 * Return: nothing
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int min;

	min = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		min <<= 1;
		if (b[i] == '1')
		min += 1;
	}
	return (min);
}

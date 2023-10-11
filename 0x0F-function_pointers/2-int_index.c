#include "function_pointers.h"

/**
 * int_index - index
 * @array: array
 * @size: size
 * @cmp: argument
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);
				j++;
			}
		}
	}
	return (-1);
}

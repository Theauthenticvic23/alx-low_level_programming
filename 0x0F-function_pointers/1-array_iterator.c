#include "function_pointers.h"

/**
 * array_iterator - arrays
 * @array: arguments
 * @size: size
 * @action: action
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}

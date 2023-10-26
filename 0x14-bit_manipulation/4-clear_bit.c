#include "main.h"

/**
 * clear_bit - value of bit
 * @n: param
 * @index: index
 * Return: nothing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

#include "variadic_functions.h"

/**
 * sum_them_all - sum them all
 * @n: args
 *
 * Return: nothing
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j = 0;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n ; j++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}

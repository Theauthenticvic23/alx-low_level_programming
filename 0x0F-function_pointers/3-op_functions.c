#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add
 * @a: args
 * @b: args
 *
 * Return: nothing
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: args
 * @b: args
 *
 * Return: nothing
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: args
 * @b: args
 *
 * Return: nothing
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: args
 * @b: args
 *
 * Return: nothing
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: args
 * @b: args
 *
 * Return: nothing
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

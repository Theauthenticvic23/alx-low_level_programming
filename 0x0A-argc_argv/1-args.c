#include "main.h"
#include <stdio.h>

/**
 * main - number of args
 * @argc: cout argument
 * @argv: vector argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

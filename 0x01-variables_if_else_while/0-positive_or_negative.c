#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>

/**
 * main - real main
 *
 * Return: contant 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is a positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is a negative", n);
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - function of sum multiple of 3 0r 5 in numbers below 1024
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}

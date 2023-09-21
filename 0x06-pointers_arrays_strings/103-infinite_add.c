#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer parameter
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0 ; j < i ; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st gumber
g* @n2: text representation of 2nd number
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int carry = 0;
	int digits = 0;

	while (*n1 || *n2)
	{
		int temp_tot = carry;
		if (*n1)
		{
			temp_tot += *n1 - '0';
			n1++;
		}
		if (*n2)
		{
			temp_tot += *n2 - '0';
			n2++;
		}

		if (digits < size_r)
		{
			*(r + digits) = (temp_tot % 10) + '0';
		}
		else
		{
			return 0;
		}

		carry = temp_tot / 10;
		digits++;
	}
	if (carry && digits < size_r)
	{
		*(r + digits) = carry + '0';
		digits++;
	}
	if (digits < size_r)
	{
		r[digits] = '\0';
		return (r);
	}
	else
	{
		return (0);
	}
}

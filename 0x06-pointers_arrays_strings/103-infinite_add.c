#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int k = 0;
	int r = 0;
	char temp;

	while (*(n + k) != '\0')
	{
		k++;
	}
	k--;

	for (x = 0; x < k; x++, k--)
	{
		temp = *(n + x);
		*(n + x) = *(n + k);
		*(n + k) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, k = 0, x = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + k) != '\0')
		k++;
	while (*(n2 + x) != '\0')
		x++;
	k--;
	x--;
	if (x >= size_r || k >= size_r)
		return (0);
	while (x >= 0 || k >= 0 || overflow == 1)
	{
		if (k < 0)
			val1 = 0;
		else
			val1 = *(n1 + k) - '0';
		if (x < 0)
			val2 = 0;
		else
			val2 = *(n2 + x) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		x--;
		k--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

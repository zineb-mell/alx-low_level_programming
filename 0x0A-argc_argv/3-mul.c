#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, x, n, len, j, digit;

	a = 0;
	x = 0;
	n = 0;
	len = 0;
	j = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && j == 0)
	{
		if (s[a] == '-')
			++x;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (x % 2)
				digit = -digit;
			n = n * 10 + digit;
			j = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			j = 0;
		}
		a++;
	}

	if (j == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

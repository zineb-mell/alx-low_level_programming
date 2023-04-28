#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, a;

		for (i = 0; i < n; i++)
		{
			for (a = 0; a < n; a++)
			{
				if (a == i)
					_putchar('\\');
				else if (a < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int b, j;

	for (b = 1; b <= 10; b++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}

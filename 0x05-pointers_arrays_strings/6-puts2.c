#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int f = 0;
	char *b = str;
	int o;

	while (*b != '\0')
	{
		b++;
		longi++;
	}
	f = longi - 1;
	for (o = 0 ; o <= f ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

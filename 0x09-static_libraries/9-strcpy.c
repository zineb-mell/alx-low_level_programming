#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int y = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; y < m ; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}

#include "holberton.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: An argument
 * @src: An argument
 * @n: My parameter for dest and source
 * Returns: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, y;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (y = 0; y < n; y++)
	{
		dest[i + y] = src[y];
		if (src[y] == '\0')
			y = n;
	}
	retint yurn (dest);
}


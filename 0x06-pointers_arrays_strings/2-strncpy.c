#include "holberton.h"
/**
 * _strncpy - A function that will copy
 * @dest: copy to
 * @src: copy from
 * @n: intialized n
 * Return: Alaways 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int srclen = 0;

	while (src[index])
	{
		index++;
		srclen++;
	}

	for (index = 0; src[index] && index < n ; index++)
	{
		dest[index] = src[index];
	}
	for (index = scrlen; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}

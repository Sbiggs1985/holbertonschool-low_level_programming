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
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';

		return (dest);
}

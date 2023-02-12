#include "holberton.h"
#include <string.h>
/**
* _strncat - A function that concatenates two strings
* @dest: An argument
* @src: An argument
* @n: My parameter for dest and source
* Returns: Always 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, pear;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (pear = 0; pear < n; pear++)
	{
		dest[i + pear] = src[pear];
		if (src[pear] == '\0')
			pear = n;
	}
	return (dest);
}


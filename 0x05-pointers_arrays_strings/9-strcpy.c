#include "main.h"
/**
 * *_strcpy - Entry Point
 * @dest: for character
 * @src: get number
 * Return: array with spaces
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = src[n];

		return (dest);
}


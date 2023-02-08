#include "holberton.h"

/**
 * _strcat - Write a function that concatenates two sstrings
 * @dest: String to be appended
 * @src: String
 * Return: The result is concatenating
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])

		i++;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}

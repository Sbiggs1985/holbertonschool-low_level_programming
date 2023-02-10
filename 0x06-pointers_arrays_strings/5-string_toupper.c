#include "holberton.h"
/**
 * string_toupper - A function that changes lower of a string to upper
 * @n: Input used to return n
 * Return: capitalized string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; itt)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}

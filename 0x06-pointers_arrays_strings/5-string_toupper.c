#include "holberton.h"
/**
 * string_toupper - A function that changes lower of a string to upper
 * @n: Input used to return n
 * Return: capitalized string
 */
char *string_toupper(char *n)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}

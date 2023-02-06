#include "main.h"
/**
 * int_strlen - Entry Point
 * @s: get string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}


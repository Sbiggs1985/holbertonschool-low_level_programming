#include "holberton.h"
/**
 * _strcmp - A function that compares 2 strings
 * @s1: comparing s1 to s2
 * @s2: comparing s1 to s2
 * Return: Always 0 (yay)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

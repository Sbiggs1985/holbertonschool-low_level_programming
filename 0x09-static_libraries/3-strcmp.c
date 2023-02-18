#include "main.h"
/**
 * _strcmp - A function that compares 2 strings
 * @s1: comparing s1 to s2
 * @s2: comparing s1 to s2
 * Return: Always 0 (yay)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

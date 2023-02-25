#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenating
 * @s1: input
 * @s2: input
 * Return: Depends
 */i

char *str_concat(char *s1, char *s2)
{
	int z = 0;
	int y = 0;
	int x = 0;
	int a = 0;
	int b = 0;

	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[z])
		z++;

	while (s2[y]
		y++;

	a = z + y;
	s = malloc((sizeof(char) * a) + 1);

	if (s == NULL)
		return (NULL);

	while (x < a)

	if (x <= z)
		s[x] = s1[x];

	if (x >= z)
	{
		s[x] = s2[b];
		b++;
	}
		x++;
	}

	s[x] = '\0';
	return (s);
}




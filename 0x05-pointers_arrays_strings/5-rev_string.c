#include "main.h"
/**
 * rev_string - Entry Point
 * @s: Reversing a string
 * Return: string and more
 */
void rev_string(char *s)
{
	int revcount = 0;
	int x;
	char inputstring;

	while (s[revcount] != '\0')
	{
		revcount++;
	}
	for (x = 0; x < revcount; x++)
	{
		revcount--;
		inputstring = s[x];
		s[x] = s[revcount];
		s[revcount] = inputstring;
	}
}

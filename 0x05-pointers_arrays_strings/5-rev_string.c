#include "main.h"
/**
 * rev_string - Entry Point
 * @s: Reversing a string
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}

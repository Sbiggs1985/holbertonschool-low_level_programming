#include "main.h"
/**
 * _memset - A function
 * @s: starting address
 * @b: The value
 * @n: number of bytes
 *
 * Return: changed with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n++;
	}
	return (s);
}

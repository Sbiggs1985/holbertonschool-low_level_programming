/**
 * main - Entry
 *
 * Return: around
 */

#include <stdio.h>

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (C = 'A'; C <= 'Z'; c++)
	{
	putchar(C);
	}
	putchar('\n');
	return (0);
}

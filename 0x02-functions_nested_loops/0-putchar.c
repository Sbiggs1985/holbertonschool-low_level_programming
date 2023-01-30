/**
 * main - Entry
 *
 * Return: putchar
 */

#include "main.h"

int main(void)
{
	char j[] = "_putchar";

	int i;

	for (i = 0; j[i]; i++)
	{
	_putchar(j[i]);
	}
	_putchar('\n');
	return (0);
}

/**
 * print_alphabet - followed by a new line
 *
 * Return: always 0
*/

#include "main.h"

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}

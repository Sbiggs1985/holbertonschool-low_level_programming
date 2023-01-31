/**
 * print_alphabet - followed by a new line
 *
 * Return: The alphabet
*/

#include "main.h"

void print_alphabet(void);
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

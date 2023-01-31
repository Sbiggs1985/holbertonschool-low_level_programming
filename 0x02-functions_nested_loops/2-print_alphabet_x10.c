/**
* Main - Entry
*
* Return: Always 0
*/

#include "main.h"

void print_alphabet_x10(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	a = 'a';
	_putchar('\n');
	}
}

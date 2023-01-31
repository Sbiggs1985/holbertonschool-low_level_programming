#include "main.h"
/**
 * print_alphabet_x10 - alphabet 10 times
 * Description: Listing the alphabet 10 times
 * Return: The alphabet
*/

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

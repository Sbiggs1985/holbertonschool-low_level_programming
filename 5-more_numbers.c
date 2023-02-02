#include "main.h"
/**
 * more_numbers - print 10 times
 * Return: I return nothing
 */
void more_numbers(void)
{
	int i = 0;
	int c;

	for (c = 0; c < 10; c++)
	{
		if (i > 9)
		{
		_putchar((i / 10) + '0');
		}
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
}

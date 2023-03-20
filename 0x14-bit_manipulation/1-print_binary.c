i#include "main.h"
/**
 * print_binary - Entry Point
 * @n: Input
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long iny mask = 1ul << (sizeof(unsigned long int) * 8 - 1);
	int started = 0;

	while (mask > 0)
	{

		if (n & mask)
		{
			started = 1;
			_putchar('1');
		}
		else if
			(started)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (!started)
	{
		_putchar('0');
	}
}

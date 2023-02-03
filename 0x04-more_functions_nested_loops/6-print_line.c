#include "main.h"
/**
 * print_line - printing a line
 * @n: Using it to increment
 *
 * Return: A line
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

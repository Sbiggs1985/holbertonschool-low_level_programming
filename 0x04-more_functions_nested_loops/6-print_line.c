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
		for (i = 0; i <= n; i ++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

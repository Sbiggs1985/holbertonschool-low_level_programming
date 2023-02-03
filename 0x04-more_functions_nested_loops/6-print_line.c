#include "main.h"
/**
 * print_line - printing a line
 * @n: Using it to increment
 *
 * Return: A line
 */
void print_line(int n)
{
	char line = '-';
	int i = 0;

		if (n > 0)
		{
			while (i < n)
			{
				_putchar(line);
				i++;
			}
		}
		_putchar('\n');
}

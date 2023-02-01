#include "main.h"
/**
 * print_last_digit - last digit
 * @r: last digit
 * Return: 0 or 1
 */

int print_last_digit(int r)
{
	int last = r % 10;

	if (r < 0)
		last = -last;

	_putchar(last + '0');

	return (last);
}

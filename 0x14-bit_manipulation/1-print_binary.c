#include "main.h"
/**
 * print_recursion - Prints binary
 * @n: Input
 */
void print_recursion(unsigned long int n)
{
	if (n == 0)
		return;
	print_recursion(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - print binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_recursion(n);
}

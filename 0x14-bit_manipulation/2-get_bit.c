#include "main.h"
/**
 * get_bit - Entry Point
 * @n: Input
 * @index: Index
 * Return: 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	return ((n & a) > 0);
}

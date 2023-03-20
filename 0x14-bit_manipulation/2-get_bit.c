#include "main.h"
/**
 * get_bit - Entry Point
 * @n: Input
 * @index: Index
 * Return: 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = (n >> index) & 1;

	if ((bit == 1) || (bit == 0))
		return (bit);
	else
		return (-1);
}

#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * set_bit - Write a function that sets the value.
 * @n: *n is a pointer
 * @index: Index is the Index.
 * Return: -1 or maybe 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = 1 << index;

	*n = *n | bits;

	return (1);
}

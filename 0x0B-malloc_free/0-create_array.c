#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - Entry point
 * @b: input
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}

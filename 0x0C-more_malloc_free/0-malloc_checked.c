#include "main.h"
/**
 * malloc_checked - returning 98 if fails
 * @b: Input
 * Return: 98 maybe HAHA
 */
void *malloc_checked(unsigned int b)
{
	void *pencil = malloc(b);

	if (pencil == NULL)
	{
		free(pencil);
		exit(98);
	}
	return (pencil);
}

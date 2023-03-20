#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - Implementation of binary
 * @b: Input
 * Return: Number
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	size_t len = strlen(b);
	unsigned int num = 0;
	unsigned int base = 1;

	for (int i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * base;
		base *= 2;
	}

	return (num);
}

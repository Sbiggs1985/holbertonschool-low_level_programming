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

	for (size_t i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	num += (b[i] - '0') * pow(2, len - 1 - 1);
	}

	return (num);
}

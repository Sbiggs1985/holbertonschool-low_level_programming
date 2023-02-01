#include "main.h"
/**
 * _abs - absolute value
 * @n: we shall see
 * Return: 0 or 1
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}

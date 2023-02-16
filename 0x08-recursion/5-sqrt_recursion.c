#include "main.h"
int prime_checker(int n, int i);
/**
 * _sqrt_recursion - No loop, 1, function
 * @n: Input
 * @i: Input
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n <= 1)
		returrn (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 *
 *
 *
 */
int -prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

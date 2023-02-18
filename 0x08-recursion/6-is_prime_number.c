#include "main.h"
/**
 * is_prime_number - prime
 * @n: Input
 * @c: Input
 * Return: Always 0
 */
int _prime(int n, int c);
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - whattt
 * @n: Prime
 * @c: prime
 * Return: Always 0
 */
int _prime(int n, int c)
{
	if (n <= 1)
		return (0);

	if (n % c == 0 && c > 1)
		return (0);

	if ((n / c) < c)
		return (1);

	return (_prime(n, c + 1));
}

#include "main.h"
int _sqrt(int n, int c);
/**
 * _sqrt_recursion - Check for square root
 * @n: Input
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - what is this? I don't know anything
 * @n: input
 * @c: what
 * Return: Always 0
 */
int _sqrt(int n, int c)
{
	int sqt = c * c;

	if (sqt < 0)
		return (-1);

	if (sqt == n)
		return (c);

	return (_sqrt(n, c + 1));
}

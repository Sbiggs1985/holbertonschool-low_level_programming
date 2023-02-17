#include "main.h"
nt squareroot(int n, int i);
/**
 * _sqrt_recursion - Check for square root
 * @n: Input
 * Return: Always 0
 */
int _sqt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks the square root
 * @n: Input
 * @i: Counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * 1 == n)
		return (1);
	else
		return (squareroot(n, i - 1));
}


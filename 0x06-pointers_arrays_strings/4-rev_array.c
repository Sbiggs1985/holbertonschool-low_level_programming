#include "holberton.h"
/**
 * reverse_array - A function that resverses
 * @a: content
 * @n: integer
 * Return: Always 0 (yay)
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

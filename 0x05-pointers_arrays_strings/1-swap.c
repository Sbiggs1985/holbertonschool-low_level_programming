#include "main.h"
/**
 * swap_int - Entry point
 * @a: first numbers
 * @b: second numbers
 * Return: integer swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

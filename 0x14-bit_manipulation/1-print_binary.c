#include "main.h"
/**
 * print_binary - Entry Point
 * @n: Input
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	int i = 0, count, x, temp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}

	for (count = i - 1; count >= 0; count--)
	{
		x = n >> count;
		if (x & 1)
			printf("1");
		else
			printf("0");
	}
}

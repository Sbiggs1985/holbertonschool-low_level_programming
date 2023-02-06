/**
 * print_square - Print a square
 * @size: use to print a square
 * Return: Always 0
 */
#include "main.h"
void print_square(int size);
{
	char square = '#';
	int x1;
	int x2;

	if (size > 0)
	{

		for (x1 = 0; x1 < size; x1++)
		{

		for (x2 = 0; x2 < size; x2++)
		{
			_putchar(square);
		}
			_putchar('\n');
			}
		}
	else
	{
	_putchar('\n');
	}
}

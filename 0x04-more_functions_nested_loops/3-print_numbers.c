#include "main.h"
/**
* print_numbers - we are printing numbers from 0 to 9
*
* Description: We are using the syntax to print the numbbers
* Return: We will return nothing
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	{
	_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}

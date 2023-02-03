#include "main.h"
/**
 * more_numbers - Printing  to 14 10 times
 * @i: Using i as the variable to print our code
 *
 * Return: Return 1 or 0
 */
void more_numbers(void);
{
	for (i = 0; <= 14; i++)
	{
		if (i < 9)
		{
			_putchar((i / 10) + '0');
		}
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}


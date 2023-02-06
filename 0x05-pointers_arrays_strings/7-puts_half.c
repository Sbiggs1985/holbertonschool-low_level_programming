#include "main.h"
/**
 * puts_half - Entry Point
 * @str: get string
 * Return: Return half
 */

void puts_half(char *str);
{
	int length = 0;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		n = ((length + 1) / 2);
	}
	else
	{
		n = (length / 2)
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		x++;
	}
	_putchar('\n');
}


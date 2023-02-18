#include "main.h"
/**
 * _islower - check for lowercase
 * @c: is a ascii character
 * Description: Check for lowercase
 * Return: 1 if lowercase
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

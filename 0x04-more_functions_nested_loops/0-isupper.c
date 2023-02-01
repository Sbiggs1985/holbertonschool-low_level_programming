#include "main.h"
/**
 * _isupper - Return 1 if capital
 * @c: Character passed to function
 * Return: return 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

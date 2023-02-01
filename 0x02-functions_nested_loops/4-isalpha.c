#include "main.h"
/**
 * _isalpha - Alphabetic characters
 * @c: c is a letter in the alphabet
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


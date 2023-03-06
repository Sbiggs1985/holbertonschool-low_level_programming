#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: Containing a string
 * @f: pointer to function
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

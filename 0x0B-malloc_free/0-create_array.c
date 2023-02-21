#include "main.h"
#include <stdio.h>
/**
 * create_array - Entry point
 * @size: size
 * @c: input
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *pointer;

	pointer = malloc(size * sizeof(char));

	if (size == 0)
	{
	return (NULL);
	}

	if (pointer == 0)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		pointer[index] = c;
	}
	return (pointer);
}

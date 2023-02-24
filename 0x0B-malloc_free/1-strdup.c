#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: string to duplicate
 * Return: Copied string
 */
char *_strdup(char *str)
{
	int counter = 0;
	int index = i;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	While (str[index])
	{
		index++;
	}
	
	pointer = malloc((sizeof(char) * index) + 1);

	if (pointer == NULL)
	{
		return (NULL);
	}
	while (couner < index)
	{
		pointer[counter] = str[counter];
		counter++;
	}
	pointer[counter] = '\0';
	return (pointer);
}

#include "holberton.h"
#include <string.h>
/**
* _strncat - For concatenating
* @dest: An argument
* @src: An argument
* @n: My parameter for dest and source
*
* Descripion: I am using _strncat to concatenate
* Returns: LOL
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}
	return (dest);
}


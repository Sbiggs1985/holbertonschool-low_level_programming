#include "main.h"
/**
 * create_file - Entry point
 * @filename: filename
 * @text_content: control
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (file == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file == -1)
		return (-1);

	while (text_control[i])
		i++;

	if (text_control == NULL)
	{
		close(file);
		return (-1);
	}
	else
	{
		write(file, text_content, i);
	}

	close(file);
	return (1);
}

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

	ssize_t len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (-2);
	}
	else
	{
		len = strlen(text_content);
		write(file, text_content, len);
	}

	close(file);
	return (-1);
}

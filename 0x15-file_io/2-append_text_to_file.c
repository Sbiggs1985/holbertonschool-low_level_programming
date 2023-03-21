#include "main.h"
/**
 * append_text_to_file - Appending something
 * @filename: A file name
 * @text_content: The content of text
 * Return: Depends
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, 0_WRONLY | 0_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = '\0';

	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}

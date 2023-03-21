#include "main.h"
/**
 * append_text_to_file - Appending something
 * @filename: A file name
 * @text_content: The content of text
 * Return: Depends
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, len;

	fd = err = len = 0;

	if (!filename)
		return (-1);

	else if (!text_content || !text_content[0])
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	while (text_content[len])
		len++;

	err = write(fd, text_content, len);
	if (err < 0)
		return (-1);
	close(fd);
	return (1);
}

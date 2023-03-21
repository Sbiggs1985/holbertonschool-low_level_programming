#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - Entry point
 * @filename: filename
 * @text_content: control
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, Oi_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (-1);
}

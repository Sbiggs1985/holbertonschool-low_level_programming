#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 1024

static ssize_t read_file(char *file, char **buf, int fd);
static void write_copy(char *file, int fd, char *buf, int len);
/**
 * main - Copies the content
 * @ac: Argument count.
 * @av: Argument
 *
 * Return: 0 (success)
 */
int main(int ac, char *av[])
{
	int fd_0, fd_1, rd_len, err;
	char *buf, *file_from, *file_to;

	buf = NULL;
	rd_len = 1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];
	fd_0 = open(file_from, O_RDONLY);
	fd_1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd_len > 0)
	{
	/* Read the content from origin file */
	rd_len = read_file(file_from, &buf, fd_0);

	if (!rd_len)
		break;
	/* Write out the buffer to destination */
	write_copy(file_to, fd_1, buf, rd_len);
	}

	free(buf);
	err = close(fd_0);

	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_0);
		exit(100);
	}
	err = close(fd_1);

	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	return (0);
}
	/**
	 * @read_file - A function that read a file into a buffer.
	 * Description: This is an additional header proto
	 * @file: File
	 * @buf: P to a P
	 * @fd: file descriptor
	 *
	 * Return: the current
	 */
static ssize_t read_file(char *file, char **buf, int fd)
{
	int rd_len;

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}

	if (!(*buf))
		*buf = malloc(sizeof(char) * BUFSIZE);

	if (!(*buf))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	rd_len = read(fd, *buf, BUFSIZE);

	if (rd_len < 0)
	{
		free(*buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (rd_len);
}
/**
 * write_copy - write and copy
 * @file: destination for content
 * @fd: file descriptor
 * @buf: p to buffer
 * @len: length
 */
static void write_copy(char *file, int fd, char *buf, int len)
{

	if (fd < 0 || !buf)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	if (write(fd, buf, len) < 0)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

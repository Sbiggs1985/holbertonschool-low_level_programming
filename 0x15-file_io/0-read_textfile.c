#include "main.h"

/**
 * read_textfile - Entry Point
 * @filename: Name of the file
 * @letters: Number of characters to read
 * Return: Depends
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, letters);
	close(fd);

	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (bytes_written);
}

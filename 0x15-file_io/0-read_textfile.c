#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Entry Point
 * @filename: Name of the file
 * @letters: Number of characters to read
 * Return: Depends
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	FILE *fp;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, fp);
	buffer[bytes_read] = '\0';

	bytes_written = fwrite(buffer, 1, bytes_read, stdout);

	if (bytes_written != bytes_read)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (bytes_written);
}

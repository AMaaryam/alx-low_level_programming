#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text and prints to STDOUT.
 * @filename: Name of the file to read.
 * @max_bytes: Maximum number of bytes to read.
 *
 * Return: Number of bytes read and printed. If the function fails or if
 * the filename is NULL, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_written;
	ssize_t bytes_read;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}

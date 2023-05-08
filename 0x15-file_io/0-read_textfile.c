#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print it to STDOUT.
 * @filename: Name of the file to be read.
 * @max_bytes: Maximum number of bytes to be read and printed.
 * Return: The actual number of bytes read and printed on success,
 *         and 0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t max_bytes)
{
    char *buffer;
    ssize_t file_descriptor;
    ssize_t bytes_read;
    ssize_t bytes_written;

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return (0);

    buffer = malloc(sizeof(char) * max_bytes);
    bytes_read = read(file_descriptor, buffer, max_bytes);
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    free(buffer);
    close(file_descriptor);

    return (bytes_written);
}

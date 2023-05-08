

#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read the tex whicht prints STDOUT.
 * @filename: text reading
 * @letters: The number of characters to read and print.
 *Return: The actual number of bytes read and printed on success,
*0 if the function fails or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char buf; / Pointer to allocated buffer. /
ssize_t fd; / File descriptor. /
ssize_t w; / Number of characters written to STDOUT. /
ssize_t t; / Number of characters read from file. */

fd = open(filename, O_RDONLY);  /* Open file in read-only mode. */
if (fd == -1)
	return (0);  /* Return 0 if opening the file fails. */

buf = malloc(sizeof(char) * letters);  /* Allocate memory for buffer. */
t = read(fd, buf, letters);  /* Read characters from file into buffer. */
w = write(STDOUT_FILENO, buf, t);  /* Write characters from buffer to STDOUT. */

free(buf);  /* Free the memory allocated for buffer. */
close(fd);  /* Close the file. */
return (w);  /* Return the number of characters written to STDOUT. */
}

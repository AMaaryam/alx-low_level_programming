#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to be added to the end of the file.
 *
 * Return: -1 when the function fails or filename is NULL,
 *         -1 when the file does not exist or user lacks write permissions,
 *         1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor, write_result, text_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (text_length = 0; text_content[text_length];)
            text_length++;
    }

    file_descriptor = open(filename, O_WRONLY | O_APPEND);
    write_result = write(file_descriptor, text_content, text_length);

    if (file_descriptor == -1 || write_result == -1)
        return (-1);

    close(file_descriptor);

    return (1);
}

#include "main.h"

/**
 * create_file - Create a file and write to it.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to the string to be written to the file.
 *
 * Return: -1 if the function fails, 1 if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, write_result, text_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (text_length = 0; text_content[text_length];)
            text_length++;
    }

    file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    write_result = write(file_descriptor, text_content, text_length);

    if (file_descriptor == -1 || write_result == -1)
        return (-1);

    close(file_descriptor);

    return (1);
}

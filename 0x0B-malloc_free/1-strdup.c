#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string to a new memory space location
 * @str: Char
 * 
 * Return: 0
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL) /* Validate str input */
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /* Add null terminator to length */

	duplicate_str = malloc(sizeof(char) * len); /* Allocate memory */

	if (duplicate_str == NULL) /* Validate memory */
		return (NULL);

	i = 0;

	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}

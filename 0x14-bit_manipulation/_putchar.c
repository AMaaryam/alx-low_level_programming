#include "main.h"
#include<unistd.h>

/**
 * _putchar - 	Write character characterToPrint to stdout
 * @characterToPrint: The character to print
 *
 * Return: 1. On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char characterToPrint)
{
	return (write(1, &characterToPrint, 1));
}

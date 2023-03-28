#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that print a string in reverse
 * @s: input string
 * Return: inout string in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	};
	_putchar('\n');
}

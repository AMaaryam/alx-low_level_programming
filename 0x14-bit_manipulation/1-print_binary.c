#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @num: The number to be printed in binary
 */
void print_binary(unsigned long int num)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = num >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

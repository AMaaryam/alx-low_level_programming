#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	/* iterate over all bits in n */
	for (i = 63; i >= 0; i--)
	{
		current = n >> i; /* get the current bit */

		if (current & 1) /* if the current bit is 1, print 1 */
		{
			_putchar('1');
			count++; /* increment count of printed bits */
		}
		else if (count) /* if the current bit is 0 and we've already printed bits, print 0 */
			_putchar('0');
	}

	if (!count) /* if no bits were printed, print a 0 */
		_putchar('0');
}

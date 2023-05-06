#include "main.h"

/*
 *
 * print_binary - print binary equivalent of decimal number
 * @dec_num: decimal number to be printed at binary
 */
void print_binary(unsigned long int dec_num)
{
	int i, bit_count = 0;
	unsigned long int current_bit;

	for (i = 63; i >= 0; i--)
	{
		current_bit = dec_num >> i;

		if (current_bit & 1)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count)
			_putchar('0');
	}
	if (!bit_count)
		_putchar('0');
}

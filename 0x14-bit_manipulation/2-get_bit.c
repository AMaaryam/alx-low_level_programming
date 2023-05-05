#include "main.h"

/**
 * get_bit - Returns the value of the bit at a given index in a decimal number
 * @n: The number to search for the bit
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit (0 or 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	/* Shift n to the right by the index and get the least significant bit */
	bit_val = (n >> index) & 1;

	return (bit_val);
}

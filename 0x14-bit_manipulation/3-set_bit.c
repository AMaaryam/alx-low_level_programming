#include "main.h"

/**
    set_bit - sets a bit of a given index to 1

    @numPtr: pointer to the number to be modified

    @bitIndex: index of the bit to be set to 1

    Return: on success 1, on failure -1
    */
int set_bit(unsigned long int *num_ptr, unsigned int bit_index)
{
	if (bit_index > 63)
		return (-1);

	*num_ptr = ((1UL << bit_index) | *num_ptr);
	return (1);
}

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number as a string
 *
 * Return: unsigned int converted from binary, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0; /* variable to hold the converted decimal value*/

	if (!b)
		return (0); /* return 0 if input is NULL*/

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0); /* return 0 if input is not a binary number*/
		dec_val = 2 * dec_val + (b[i] - '0'); /* calculate decimal value from binary*/
	}

	return (dec_val); /* return decimal value*/
}

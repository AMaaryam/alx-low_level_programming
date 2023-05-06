#include "main.h"

/**
 * binary_to_uint - convert binary number to be unsigned int
 * @bi: String containt binary number
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *bi)
{
	int i;
	unsigned int dec_vale = 0;

	if (!bi)
		return (0);

	for (i = 0; bi[i]; i++)
	{
		if (bi[i] < '0' || bi[i] > '1')
			return (0);
		dec_vale = 2 * dec_vale + (bi[i] - '0');
	}

	return (dec_vale);
}

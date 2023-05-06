#include "main.h"

/**
 * get_endianness - checks if machine is little or big endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int num = 1;
    char *c = (char *)&num;

    return (*c);
}

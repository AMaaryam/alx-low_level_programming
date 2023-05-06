#include "main.h"

/**

    clear_bit - sets the value of a given bit to 0

    @numPtr: pointer to the number to be modified

    @bitIndex: index of the bit to be cleared

    Return: on success 1, on failure -1
    */
    int clear_bit(unsigned long int *numPtr, unsigned int bitIndex)
    {
    /* check if the bit index is within range*/
    if (bitIndex > 63)
    {
    return (-1);
    }

    /* clear the bit using bit manipulation*/
    *numPtr = (~(1UL << bitIndex) & *numPtr);

    /* return success*/
    return (1);
    }

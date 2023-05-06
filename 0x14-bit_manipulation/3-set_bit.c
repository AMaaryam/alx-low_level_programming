#include "main.h"

/**
    set_bit - sets a bit of a given index to 1

    @numPtr: pointer to the number to be modified

    @bitIndex: index of the bit to be set to 1

    Return: on success 1, on failure -1
    */
    int set_bit(unsigned long int *numPtr, unsigned int bitIndex)
    { /* check if the bit index is within range*/
    	if (bitIndex > 63)
    
    		return (-1); /*set the bit to 1 using bit manipulation*/
    	*numPtr = ((1UL << bitIndex) | *numPtr);/* return success*/
    		return (1);
    }

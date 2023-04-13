#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *  *malloc_checked - Allocates memory using malloc
 *  *@b: unsigned int argument size of memory
 *  
 *  *Description: Allocates memory using malloc and checks for a NULL
 *  *Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;
    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);
    return (ptr);
}

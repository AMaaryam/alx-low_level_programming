#include "lists.h"

/**

    print_list - Prints all the elements of a list_t list.
    @h: A pointer to the first node of the list_t list.
    Return: The number of nodes in the list.
    */

size_t print_list(const list_t *ha)
{
size_t nelm; // Variable to keep track of the number of elements
	     nelm = 0; // Initialize the count to 0

    // Loop through the list until the end is reached
    while (ha != NULL)
    {
            // Print the current element and increment the count
            if (ha->str == NULL)
                    printf("[%d] %s\n", 0, "(nil)");
            else
                    printf("[%d] %s\n", ha->len, ha->str);

            ha = ha->next; // Move to the next element
            nelm++; // Increment the count
    }

    return (nelm); // Return the total couni
}

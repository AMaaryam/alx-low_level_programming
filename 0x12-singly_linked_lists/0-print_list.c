#include "lists.h"

/*
Prints all elements of a list_t list. 
Takes in a singly linked list as a parameter.
Returns the number of elements in the list.
*/
size_t print_list(const list_t *head_node) 
{
    size_t element_number = 0; // number of elements in the list
    
    while (head_node != NULL) { // while we are not at the end of the list
        // if the element's string is null, print the length and "(nil)"
        if (head_node->str == NULL) 
	{
            printf("[%d] %s\n", 0, "(nil)");
        // otherwise, print the length and string
        } else
       
	{
            printf("[%d] %s\n", head_node->len, head_node->str);
        }
        head_node = head_node->next; // move to the next element in the list
        element_number++; // increment the number of elements
    }
    return (element_number); // return the number
}

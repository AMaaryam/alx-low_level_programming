#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * Owned By Maaryam
 * @head_ref: the head
 * @string_data: string
 * Return: address
 */

list_t *add_node(list_t **head_ref, const char *string_data)
{
	list_t *new_node;i // Declaration of the new node
	size_t string_length; // Declaration of size_t variable

	new_node = malloc(sizeof(list_t));// Allocation of memory
	if (new_node == NULL)
	{
		return (NULL);// Return null if memory allocation fails
	}

	new_node->str = strdup(string_data); // Duplicate the string

	for (string_length = 0; string_data[string_length]; string_length++)// Calculate the length of the string
		;
 // Set the length of the string
	new_node->len = string_length;
	new_node->next = *head_ref; // Set the new node's next as the head
	*head_ref = new_node;// Update the head

	return (*head_ref);// Return the head
}

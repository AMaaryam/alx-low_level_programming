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
	list_t *new_node;
	size_t string_length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(string_data);

	for (string_length = 0; string_data[string_length]; string_length++)
		;

	new_node->len = string_length;
	new_node->next = *head_ref;
	*head_ref = new_node;

	return (*head_ref);
}

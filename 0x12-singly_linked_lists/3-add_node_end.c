#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @list_head: head of the list
 * @string: string to add
 * Return: address of the new element
 */
list_t *add_node_end(list_t **list_head, const char *string)
{
	list_t *new_node, *last_node;
	size_t length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(string);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; string[length]; length++)
		;
	new_node->len = length;
	new_node->next = NULL;
	last_node = *list_head;

	if (last_node == NULL)
	{
		*list_head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (*list_head);
}

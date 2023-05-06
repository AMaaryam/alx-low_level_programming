#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current_node = head;

	while (current_node && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}

	return (current_node ? current_node : NULL);
}

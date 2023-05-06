#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (i < index)
	{
		if (current_node == NULL)
			return (-1);

		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}

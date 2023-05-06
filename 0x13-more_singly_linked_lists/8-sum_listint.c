#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of all the data in the linked list
 */
int sum_listint(listint_t *head)
{
	int s_u_m = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		s_u_m += current_node->n;
		current_node = current_node->next;
	}

	return (s_u_m);
}

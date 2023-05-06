#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **h)
{
	listint_t *tempO;

	if (h == NULL)
		return;

	while (*h)
	{
		tempO = (*h)->next;
		free(*h);
		*h = tempO;
	}

	*h = NULL;
}

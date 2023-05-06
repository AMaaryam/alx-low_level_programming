#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **h)
{
	listint_t *tempO;
	int num;

	if (!h || !*h)
		return (0);

	num = (*h)->n;
	tempO = (*h)->next;
	free(*h);
	*h = tempO;

	return (num);
}

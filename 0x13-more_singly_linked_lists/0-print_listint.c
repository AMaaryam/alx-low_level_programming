#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a linked list
 * @head: pointer to first node
 * Return: size of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t num = 0;

	while (head)
	{
		printf("%d\n", head->n);
		num++;
		head = head->next;
	}

	return (num);
}

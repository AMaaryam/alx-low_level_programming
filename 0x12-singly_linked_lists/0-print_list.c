#include "lists.h"
/**
 * print_list -  function that prints all the elements of a list_t list.

 * @head: linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *head)
{
	size_t number_of_nodes = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		number_of_nodes++;
		head = head->next;
	}

	return (number_of_nodes);
}

#include "lists.h"

/**
 * free_list - function that frees a list_t
 * Owned By Maarym
 * @list_head: head of the list
 * Return: void
 */
void free_list(list_t *list_head)
{
	list_t *current_node;

	while (list_head != NULL)
	{
		current_node = list_head;
		list_head = list_head->next;
		free(current_node->str);
		free(current_node);
	}
}

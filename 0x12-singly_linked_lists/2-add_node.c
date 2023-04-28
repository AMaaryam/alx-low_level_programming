#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * *add_node - adds a node to a linked list head
 * @head: linked list head
 * @str: string element of the linked list
 * Return: number of elements
 */

list_t *add_node(list_t **list, const char *str)
{
	list_t *new_element;
	int str_len;

	new_element = (list_t *) malloc(sizeof(list_t));

	if (new_element == NULL)
	{
		free(new_element);
		return (NULL);
	}

	new_element->str = strdup(str);
	if (new_element->str == NULL)
	{
		free(new_element);
		return (NULL);
	}
	for (str_len = 0; str[str_len] != '\0';  str_len++)
	;

	new_element->len = str_len;
	new_element->nextcontinue = *list;
	*list = new_element;

	return (new_element);
}

#include "lists.h"

/**

    print_listint - prints a linked list

    @head: pointer to first node

    Return: size of nodes
    */
    size_t print_listint(const listint_t *head)
    {
    size_t node_count = 0;

    while (head)
    {
    printf("%d\n", head->n);
    node_count++;
    head = head->next;
    }

    return (node_count);
    }

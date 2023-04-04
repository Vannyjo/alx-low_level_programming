#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint - Prints all elements of a listint_t list
 * @head: Pointer to head of list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
        count++;
    }

    return (count);
}


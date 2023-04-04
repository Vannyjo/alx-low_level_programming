#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint - the function prototype  that prints all the elements of a listint_t list.
 *
 * @h: is a pointer that points to the head of the node
 *
 * Return: the number of nodes always (Success)
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

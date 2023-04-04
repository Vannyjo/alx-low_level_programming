#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - F unction of the prototype that prints all the element in the listint_t
 * @**h: h is the pointer that poi nts to the head of the node
 * Return: Always number of the (node)
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

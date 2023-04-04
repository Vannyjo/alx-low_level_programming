#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * listint_len -is the function prototype  Counts the number of elements in a linked listint_t list.
 *
 * @h: Pointer that points to the head of the list.
 *
 * Return: The number of elements in the list always (success)
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

#include "lists.h"
#include <stdlib>

/**
 * listint_len - the function prototype that counts the number of elements in a linked listint_t list.
 *
 * @h: head pointer that points to nthe start of the node
 *
 * Return: the number of elements
 *
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

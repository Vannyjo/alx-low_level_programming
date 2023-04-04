#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @head: Pointer to the head of the list.
 * 
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *head)
{
       	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return count;
}

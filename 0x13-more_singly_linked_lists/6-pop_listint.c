#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function prototype that deletes the head node in the linked list
 * @head: a pointer that points to another pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}

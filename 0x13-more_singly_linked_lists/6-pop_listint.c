#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - this is a function that deletes the head node of linkint linked list and returns 0
 * @head: a head pointer that points to another pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *startNode;
	int n;

	if (head == NULL || *head == NULL)

		return (0);
	startNode = *head;
	*head = startNode->next;
	n = startNode->n;
	free(startNode);
	return (n);
}


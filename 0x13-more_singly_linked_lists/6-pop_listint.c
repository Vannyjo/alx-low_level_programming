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

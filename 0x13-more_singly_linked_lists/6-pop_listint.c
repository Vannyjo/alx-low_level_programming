#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
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


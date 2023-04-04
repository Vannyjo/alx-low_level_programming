#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that  frees a listint_t list
 *
 * @head: A node that started the linked list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head != NULL)
	{
		nextNode= head->nextNode;
		free(head);
		head = nextNode;
	}
}

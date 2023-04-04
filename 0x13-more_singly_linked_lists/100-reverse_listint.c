#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	previousNode = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = next;
	}
	*head = previousNode;
	return (*head);
}

#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t linked list
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *initialNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->nextNode == NULL)
		return (*head);
	initialNode = NULL;
	while (*head != NULL)
	{
		nextNode = (*head)->nextNode;
		(*head)->next = initialNode;
		initialNode = *head;
		*head = nextNode;
	}
	*head = initialNode;
	return (*head);
}


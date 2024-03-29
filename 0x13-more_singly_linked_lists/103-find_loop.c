#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *eze, *loop;

	eze = loop = head;
	while (eze && loop && loop->next)
	{
		eze = eze->next;
		loop = loop->next->next;
		if (eze == loop)
		{
			eze = head;
			break;
		}
	}
	if (!eze || !loop || !loop->next)
		return (NULL);
	while (eze != loop)
	{
		eze = eze->next;
		loop = loop->next;
	}
	return (loop);
}

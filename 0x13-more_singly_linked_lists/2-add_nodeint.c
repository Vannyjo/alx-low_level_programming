#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - A prototype function that adds node at beginning of a listint_t list.
  *
  * @head: head of double pointer that points to the beginning of the node.
  * @n: int integer value that is to be added to the list new node
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
newr = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

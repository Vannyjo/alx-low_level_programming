#include "lists.h"
#include <stdlib.h>
#include <stringe>
/**
  * add_nodeint - A prototype function that adds node at beginning of a listint_t list.
  *
  * @head: head of double pointer that points to the beginning of the node.
  * @n: int integer value that is to be added to the list new node
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}


#include "lists.h"
#include <stdlib.h>
/**
  *add_dnodeint_end - adds a new node at the end of a dlistint_t list
  *@head: pointer to buffer of doubly linked list
  *@n: value to insert at new node
  *
  *Return: address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if  (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		new->prev = (*head);
		(*head)->next = new;
		while (1)
		{
			if ((*head)->prev == NULL)
				break;
			*head = (*head)->prev;
		}
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}

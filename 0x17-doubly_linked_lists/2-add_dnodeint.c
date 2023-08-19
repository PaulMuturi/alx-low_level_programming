#include "lists.h"
#include <stdlib.h>
/**
  *add_dnodeint - adds a new node at the beginning of dlistint_t
  *@head: pointer to a buffer of doubly linked list
  *@n: value of n for new node
  *
  *Return: address of the new element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (*head != NULL)
	{
		new->next = (*head);
		(*head)->prev = new;
	}
	else
		new->next = NULL;


	(*head) = new;
	return (new);
}

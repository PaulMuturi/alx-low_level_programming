#include <stdlib.h>
#include "lists.h"
/**
  *insert_dnodeint_at_index - inserts a new node at a given position.
  *@h: pointer to buffer of doubly linked list
  *@idx: index to insert new node at
  *@n: value of the new node
  *
  *Return: address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *insert;

	if (idx < i)
		return (NULL);

	if (*h == NULL && idx == i)
	{
		insert = insert_to_emptylist(h, n);
		return (insert);
	}
	else
	{
		while (*h != NULL)
		{
			if (idx == i)
			{
				insert = insert_atindex(h, n);
				return (insert);
			}
			*h = (*h)->next;
		}
	}
	return (NULL);
}

/**
  *insert_to_emptylist - insert at 0 index
  *@h: pointer to buffer of double linked list
  *@n: value of new node
  *Return: address to new node else NULL
  */
dlistint_t *insert_to_emptylist(dlistint_t **h, int n)
{
	*h = malloc(sizeof(dlistint_t));
	if (*h == NULL)
		return (NULL);
	(*h)->prev = NULL;
	(*h)->n = n;
	(*h)->next = NULL;
	return (*h);
}

/**
  *insert_atindex - inserts at before current node
  *@current_h: node currently pointed to.
  *@n: value of new node
  *
  *Return: address to new node else NULL
  */
dlistint_t *insert_atindex(dlistint_t **current_h, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = (*current_h)->prev;
	new->n = n;
	new->next = *current_h;
	return (new);
}

#include "lists.h"
/**
  *dlistint_len - counts number of elements in a linked a list
  *@h: doubly linked list
  *
  *Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);

}


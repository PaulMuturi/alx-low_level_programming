#include "lists.h"

/**
  *print_dlistint - prints all the elements of a dlistint_t list.
  *@h: pointer to doubly linked list
  *
  *Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

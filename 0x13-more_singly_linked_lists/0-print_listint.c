#include "lists.h"

/**
  *print_listint - prints all the elements of a listint_t
  *@h: pointer to a listint_t node
  *
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (!h)
		return (0);
	while (1)
	{
		printf("%d\n", h->n);
		num++;

		if (!(h->next))
			break;
		h = h->next;
	}
	return (num);
}

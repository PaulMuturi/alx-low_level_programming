#include "lists.h"
/**
  *list_len - prints all the elements of a list_t list
  *@h: list to print
  *
  *Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	i++;

	return (i);
}

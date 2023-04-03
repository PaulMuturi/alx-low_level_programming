#include "lists.h"

/**
  *listint_len - counts number of elements in a linked lists
  *@h: pointer to a node
  *
  *Return: number of elements found
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (!h)
		return (0);

	while (1)
	{
		num++;

		if (!h->next)
			break;
		h = h->next;
	}

	return (num);
}

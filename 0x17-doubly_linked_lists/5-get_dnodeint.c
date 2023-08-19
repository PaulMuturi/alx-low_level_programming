#include "lists.h"

/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  *@head: pointer to doubly linked list
  *@index: index of node to retrieve
  *
  *Return: found node, else NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL || index < i)
		return (NULL);

	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

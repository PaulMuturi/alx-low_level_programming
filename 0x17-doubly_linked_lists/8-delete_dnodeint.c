#include <stdlib.h>
#include "lists.h"
/**
  *delete_dnodeint_at_index - deletes the node at given index.
  *@head: pointer to buffer of double linked list
  *@index: index of node to delete
  *
  *Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev, *next;

	if (*head == NULL)
		return (-1);
	while (1)
	{
		if (index == i)
		{
			prev = (*head)->prev;
			next = (*head)->next;
			if (prev != NULL)
			{
				prev->next = (*head)->next;
				*head = prev->next;
			}
			else
			{
				free(*head);
				*head = next;
				if (*head)
					(*head)->prev = NULL;
			}
			if (next == NULL)
				if (prev)
					prev->next = NULL;
		}

		if ((*head) == NULL || (*head)->next == NULL)
			break;
		*head = (*head)->next;
		i++;
	}
	while (*head != NULL && ((*head)->prev != NULL))
		*head = (*head)->prev;
	return (1);
}

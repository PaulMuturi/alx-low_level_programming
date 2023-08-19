#include <stdlib.h>
#include "lists.h"
/**
  *free_dlistint - frees a dlistint_t list
  *@head: pointer to doubly linked list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			current = head;
			head = head->next;
			free(current);
		}

		free(head);
	}
}

#include "lists.h"

/**
  *free_listint2 - frees listint_t list while setting the head to NULL
  *@head: pointer to pointer to the list
  */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (1)
	{
		next = (*head)->next;
		free(*head);
		*head = next;

		if (!next)
		{
			head = NULL;
			break;
		}
	}
}

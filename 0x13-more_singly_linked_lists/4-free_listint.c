#include "lists.h"

/**
  *free_listint - frees memory allocated to an list
  *@head: pointer to first node of list
  */
void free_listint(listint_t __attribute__((unused)) *head)
{
	listint_t *next;

	while (1)
	{
		next = head->next;
		free(head);
		head = next;

		if (!next)
			break;
	}
}

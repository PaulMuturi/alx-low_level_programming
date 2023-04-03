#include "lists.h"

/**
  *sum_listint - adds all the data (n) in the linked list
  *@head: pointer to first node of the list
  *
  *Return: sum total
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (1)
	{
		sum += head->n;

		if (!head->next)
			break;

		head = head->next;
	}

	return (sum);
}

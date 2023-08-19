#include "lists.h"
/**
  *sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list.
  *@head: doubly linked list
  *
  *Return: total sum or 0 if list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

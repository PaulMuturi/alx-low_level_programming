#include "lists.h"

/**
  *pop_listint - deletes the head node of a lined list
  *@head: pointer to pointer of first node of the list
  *
  *Return: returns the hrad node's data (n).
  */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int val;

	if (!head || !*head)
		return (0);

	next = (*head)->next;
	val = (*head)->n;
	free(*head);

	if (next)
	{
		*head = next;
	}

	return (val);
}


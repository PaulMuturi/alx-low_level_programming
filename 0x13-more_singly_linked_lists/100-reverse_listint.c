#include "lists.h"

/**
  *reverse_listint - reverses a linked list
  *@head: pointer to pointer of first node in the list
  *
  *Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !(*head))
		return (NULL);

	prev = NULL;
	while (1)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (next)
			*head = next;
		else
			break;
	}
	return (*head);
}

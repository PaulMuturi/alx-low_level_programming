#include "lists.h"

/**
  *add_nodeint_end - adds a new node at the end of a listint_t
  *@head: pointer to pointer to the head
  *@n: value of the new node
  *
  *Return: pointer to newly added list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *currnode;

	currnode = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (*head)
	{
		while (currnode->next)
		{
			currnode = currnode->next;
		}
		currnode->next = new;

	}
	else
		*head = new;

	return (*head);
}

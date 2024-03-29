#include "lists.h"

/**
  *add_nodeint - adds a new node at the beginning of a list
  *@head: pointer to pointer of a node
  *@n: int value of new node
  *Return: address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head  = new;

	return (*head);
}

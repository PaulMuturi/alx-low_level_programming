#include "lists.h"

/**
  *insert_nodeint_at_index - inserts a new node at agiven position
  *@head: pointer to pointer to the first node of the list
  *@idx: index of the list where the new node should be added
  *@n: value of the new node
  *
  *Return: address of the new node, or NULL on failure
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *firstnode;

	if (!head)
		return (NULL);
	firstnode = *head;

	while (i <= idx)
	{
		if (i == (idx - 1) || idx == 0)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);

			new->n = n;

			if (idx == 0)
			{
				new->next = *head;
				firstnode = new;
			}
			else
			{
				new->next = (*head)->next;
				(*head)->next = new;
			}

			return (firstnode);
		}

		if ((*head)->next)
			*head = (*head)->next;
		else
			break;
		i++;
	}
	return (NULL);
}

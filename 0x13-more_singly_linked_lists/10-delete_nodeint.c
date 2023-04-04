#include "lists.h"

/**
  *delete_nodeint_at_index - deletes the node at index of a linked list
  *@head: pointer to pointer of first node of the list
  *@index: index of node to delete
  *
  *Return: 1 on success, -1 on fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *next, *cur;

	cur = *head;

	if (!cur)
		return (-1);

	while (i <= index)
	{
		if (index == 0)
		{
			cur = (*head)->next;
			*head = cur;
			return (1);
		}
		if (i == (index - 1))
		{
			next = cur->next->next;
			free(cur->next);
			cur->next = next;

			return (1);
		}

		cur = cur->next;
		if (!cur)
			break;
		i++;
	}

	return (-1);
}

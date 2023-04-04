#include "lists.h"
/**
  *get_nodeint_at_index - returns the nth node of a linked list
  *@head: pointer to first node of the list
  *@index: index of node to find
  *
  *Return: pointer to found node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i <= index)
	{
		if (i == index)
			return (head);

		if (head->next)
			head = head->next;
		else
			break;
		i++;
	}

	return (NULL);
}

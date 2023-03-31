#include "lists.h"
/**
  *add_node_end - adds a new node at the end of a list_t list
  *@head: pointer to pointer of the first node
  *@str: string to copy to new element
  *
  *Return: address of the new element;
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *nxt;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	nxt = *head;
	if (nxt)
	{
		while (nxt->next != NULL)
		{
			nxt = nxt->next;
		}
		nxt->next = new;
	}
	else
	{
		*head = new;
	}

	return (*head);
}

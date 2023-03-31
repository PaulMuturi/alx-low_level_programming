#include "lists.h"

/**
  *add_node - adds a new node at the beginning of a list
  *@head: poiinter to pointer of the current node
  *@str: string content
  *
  *Return: pointer to new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

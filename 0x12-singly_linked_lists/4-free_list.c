#include "lists.h"
/**
  *free_list - frees a give list_t"
  *@head: list to be freed
  *
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *nxt, *newnxt;

	if (head)
	{
		nxt = head;
		while (nxt->next != NULL)
		{
			newnxt = nxt->next;
			free(nxt->str);
			free(nxt);
			nxt = newnxt;
		}

		free(nxt->str);
		free(nxt);
	}
}

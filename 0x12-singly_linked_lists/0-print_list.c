#include "lists.h"
/**
  *print_list - prints all the elements of a list_t list
  *@h: list to print
  *
  *Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		i += print_node(h);
		h = h->next;
	}

	i += print_node(h);

	return (i);
}
/**
  *print_node - print content of given node
  *@h: node to be printed
  *
  *Return: 1
  */
size_t print_node(const list_t *h)
{
	unsigned int slen;
	char *s;

	slen = h->len;
	s = h->str;
	if (s == NULL)
		s = "(nil)";
	else
		s = h->str;
	printf("[%d] %s\n", slen, s);

	return (1);
}

#include "lists.h"
int notloop(char *addr, char *head, size_t n);
/**
  *print_listint_safe - prints a linked list
  *@head: pointer to the first node of the list
  *
  *Return: number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	char *addr = malloc(sizeof(char *));

	if (!head)
		return (0);

	while (1)
	{
		if (notloop((char *)addr, (char *)head, n))
		{
			printf("[%p] %d\n", (void *)head, head->n);
			addr = realloc(addr, sizeof(char *) * (n + 1));
			addr = addr + n;
			addr = (char *)head;
		}
		else
			break;
		head = head->next;
		n++;
	}

	return (n);
}

int notloop(char *addr, char *head, size_t n)
{
	size_t i = 0;
	printf("notloop: %p\n", (void *)head);
	if (!head)
		return (0);

	while (i <= n)
	{
		if ((addr + i) == head)
			return (0);
		i++;
	}

	return (1);
}

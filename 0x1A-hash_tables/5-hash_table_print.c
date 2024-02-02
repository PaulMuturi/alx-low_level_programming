#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  *hash_table_print - prints a hash table.
  *@ht: hash table for printing
  *Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int next_print = 0;
	hash_node_t *node;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = (ht->array)[i];

			while (node)
			{
				if (next_print)
					printf(", '%s': '%s'", node->key, node->value);
				else
					printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				next_print = 1;
			}
		}
		printf("}\n");
	}
}

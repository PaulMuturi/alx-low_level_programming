#include "hash_tables.h"
#include <stdlib.h>

/**
 *hash_table_delete - deletes a hash table.
 *@ht: hash table for deletion
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node, *prev_node;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			current_node = (ht->array)[i];

			if  (current_node)
			{
				while (current_node)
				{
					prev_node = current_node;
					current_node = current_node->next;
					free(prev_node->key);
					free(prev_node->value);
					free(prev_node);
				}
			}
		}

		free(ht->array);
		free(ht);
	}
}

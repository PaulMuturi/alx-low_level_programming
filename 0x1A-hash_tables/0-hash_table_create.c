#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *hash_table_create - creates a hash table.
  *@size: size of of the array
  *
  *Return: pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	if (size <= 0)
		return (NULL);
	h_table = malloc(sizeof(hash_table_t));

	if (!h_table)
		return (NULL);
	h_table->array = malloc(sizeof(hash_node_t) * size);
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}
	h_table->size = size;
	/*Initialize table fields to NULL*/
	for (i = 0; i < size; i++)
		(h_table->array)[i] = NULL;

	return (h_table);
}

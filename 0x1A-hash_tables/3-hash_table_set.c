#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *hash_table_set - adds an element to the hash table.
  *@ht: has table
  *@key: key that determines index of insertion
  *@value: value for insertion
  *
  *Return: 1 on success, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	hash_node_t *new_node, *first_node;

	if (!ht)
		return (0);
	if (!key)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	idx = key_index((unsigned char *)key, ht->size);

	first_node = *ht->array;
	for (i = 0; i < idx; i++)
	{
		/*Traverse upto the desired index*/
		first_node = *ht->array + i;
	}

	if (first_node)
	{
		/*Add node to beginning of list*/
		new_node->next = first_node;
		(ht->array)[idx] = new_node;
	}
	else
		first_node = new_node;

	return (1);
}

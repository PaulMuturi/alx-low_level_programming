#include "hash_tables.h"
#include <stdlib.h>
/**
  *hash_table_get - retrieves a value associated with a key.
  *@ht: hash table
  *@key: Key whose value to retrieve
  *
  *Return: Value, Null if Key not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *) key, ht->size);

	if ((ht->array)[idx])
		return ((ht->array)[idx]->value);

	return (NULL);
}

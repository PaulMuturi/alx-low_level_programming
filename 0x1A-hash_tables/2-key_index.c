#include "hash_tables.h"
#include <stdio.h>
/**
  *key_index - Gives the index of a key
  *@key: The key to look up
  *@size: Size of the hash table
  *
  *Return: index for key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	long int idx, hash;

	hash = hash_djb2(key);

	/*Apply modulo arithmetic to get index*/
	idx = hash % size;
	return (idx);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array - creates an array of chars,
  *and initializes it with specific char
  *@size: size of memory for allocation
  *@c: character to initialize the memory buffer
  *
  *Return: pointer to memory location
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return	(NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array using malloc
  *@nmemb: number of elements for memory allocation
  *@size: size in byte of each element
  *
  *Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *ptr2;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	ptr2 = ptr;

	for (i = 0; i < size; i++)
	{
		ptr2[i] = 0;
	}

	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
  *void - _calloc - allocates memory for an array using malloc
  *@nmemb: number of elements for memory allocation
  *@size: size in byte of each element
  *
  *Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	return (ptr);
}

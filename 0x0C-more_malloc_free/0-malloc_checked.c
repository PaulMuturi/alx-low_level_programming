#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - allocates memory using malloc
  *@b: amount of memory to be allocated
  *
  *Return: voidi pointer
  */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	else
		return (ptr);
}

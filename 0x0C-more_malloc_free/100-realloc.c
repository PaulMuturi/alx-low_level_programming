#include "main.h"
#include <stdlib.h>
/**
  *_realloc - reallocates a memory block using malloc and free
  *@ptr: void pointer to memory for reallocation
  *@old_size: previous memory size
  *@new_size: new memory size
  *Return: pointer to reallocated memory location
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i;


	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (NULL);
	ptr2 = malloc(new_size);

	if (!ptr2)
		return (NULL);

	if (ptr)
	{
		for (i = 0; i < new_size; i++)
		{
			if (i < old_size)
				((char *)ptr2)[i] = ((char *)ptr)[i];
			else
				break;
		}

	free(ptr);
	}

	return (ptr2);
}

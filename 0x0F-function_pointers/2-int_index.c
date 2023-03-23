#include "function_pointers.h"
/**
  *int_index - searches for an integer
  *@array: array of int to be searched
  *@size: array size
  *@cmp: pointer to function used to compare values
  *
  *Return: index of the first element found, else -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int res, i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);

			if (res)
			{
				return (i);
			}
		}
	}

	return (-1);
}

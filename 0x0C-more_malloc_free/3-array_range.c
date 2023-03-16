#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates an array of integers
  *@min: minimum value
  *@max: maximum value
  *
  *Return: pointer to the integer array
  */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int arrsize = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * arrsize);

	if (!arr)
		return (NULL);

	for (i = 0; i < arrsize; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *alloc_grid - returns a pointer to a 2 dimensional array
  * of integers
  *@width: int width of 2d array
  *@height: int height of 2d array
  *
  *Return: pointer to initialized 2d array
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **na;

	if (!width || !height)
		return (NULL);

	na = malloc(sizeof(int *) * height);
	if (na == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		na[i] = malloc(sizeof(int) * width);
		if (!na[i])
		{
			for (j = 0; j < i; j++)
				free(na[j]);
			free(na);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			/*na[(i * height) + j] = 0;*/
			na[i][j] = 0;
		}
	}

	return (na);
}

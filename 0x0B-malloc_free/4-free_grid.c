#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensional array
  *@grid: pointer to pointer , memory to be freed
  *@height: int
  *
  *Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

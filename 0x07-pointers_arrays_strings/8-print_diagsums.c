#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - prints the sum of the two diagonals
  * of a square matrix of integers
  *@a: square matrix string
  *@size: matrix size
  *
  *Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_1 = sum_1 + *(&(a[i * size]) + j);
				sum_2 = sum_2 + *(&(a[i * size]) + ((size - 1) - j));
			}

		}

	}
	printf("%d, %d \n", sum_1, sum_2);
}

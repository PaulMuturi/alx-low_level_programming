#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  *print_array - prints n elelments of an array of integers
  *@a: array
  *@n: integer, number of elements
  *
  *Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i  < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

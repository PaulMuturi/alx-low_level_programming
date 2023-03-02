#include "main.h"
#include <string.h>

/**
  *reverse_array - reverses the content of an array of integers
  *@a: array of integers
  *@n: number of array elements
  *
  *Return: void
  */

void reverse_array(int *a, int n)
{
	int tmp, i;
	int mid = n / 2;

	for (i = 0; i < mid; i++)
	{
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[((n - 1) - i)] = tmp;
	}
}

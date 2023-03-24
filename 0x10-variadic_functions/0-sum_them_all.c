#include "variadic_functions.h"

/**
  *sum_them_all - returns the sum of all its parameters
  *@n: arguments count
  *
  *Return: sum as an integer
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list(nums);

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	return (sum);
}

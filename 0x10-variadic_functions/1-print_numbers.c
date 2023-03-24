#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_numbers - prints numbers
  *@separator: string to be printed between numbers
  *@n: number of intergers passed to the function
  *
  *Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	while (i < n)
	{
		if (separator && i > 0)
			printf("%s", separator);

		printf("%d", va_arg(nums, int));
		i++;
	}

	printf("\n");
	va_end(nums);
}

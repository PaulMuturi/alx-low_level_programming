#include "variadic_functions.h"
#include <stdio.h>

/**
  *print_strings - prints strings
  *@separator: string to be printed between the strings
  *@n: number of strings passed to the the function
  *
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	va_start(str, n);

	while (i < n)
	{
		if (separator && i > 0)
			printf("%s", separator);

		s = va_arg(str, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		i++;
	}

	printf("\n");
	va_end(str);
}

#include "main.h"

/**
  *print_binary - prints the binary representation of a number.
  *@n: number
  *
  *Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int count = sizeof(n) * 8, m = 1, a, tmp, i;
	int isbin = 0;

	for (i = 0; i < count; i++)
	{
		tmp = n >> ((count - 1) - i);
		a = tmp & m;
		if (a)
			isbin = 1;

		if (isbin)
			_putchar(a + '0');
	}

	if (!isbin)
		_putchar('0');
}

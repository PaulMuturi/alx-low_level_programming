#include "main.h"
#include <stdlib.h>

/**
  *print_last_digit - prints last digit of a number
  *@n: input integer number
  *
  *Return: last integer digit of the input number
 */
int print_last_digit(int n)
{
	int lastdigit = abs(n) % 10;

	_putchar(lastdigit + '0');
	_putchar('\n');
	return (lastdigit);
}


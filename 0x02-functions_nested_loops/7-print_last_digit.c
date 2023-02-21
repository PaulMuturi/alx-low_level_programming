#include "main.h"

/**
  *print_last_digit - prints last digit of a number
  *@n: input integer number
  *
  *Return: last integer digit of the input number
 */
int print_last_digit(int n)
{
	int lastdigit;

	int long m = (long)n;
	lastdigit = abs(m) % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}


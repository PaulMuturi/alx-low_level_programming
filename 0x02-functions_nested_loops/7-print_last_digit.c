#include "main.h"

/**
  *print_last_digit - prints last digit of a number
  *@n: input integer number
  *
  *Return: last integer digit of the input number
 */
int print_last_digit(int n)
{
	int lastdigit = _abs(n) % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}

/**
  *_abs - computes absolute value of an integer
  *@j: integer value to compute
  *
  *Return: computed integer value
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (j * (-1));
	}

	return (j);
}

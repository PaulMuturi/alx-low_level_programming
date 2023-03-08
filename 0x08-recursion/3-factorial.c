#include "main.h"

/**
  *factorial - return the factorial of a given number
  *@n: integer
  *
  *Return: integer, calculated factorial
  */

int factorial(int n)
{
	if (n >= 0 && n < 2)
		return (n);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

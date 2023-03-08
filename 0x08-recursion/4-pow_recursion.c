#include "main.h"

/**
  *_pow_recursion - returns the value of x raised to power of y
  *@x: int base
  *@y: int power
  *
  *Return: int, raised value
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	if (y == 1)
		return (x);

	y--;

	return (x * _pow_recursion(x, y));

}


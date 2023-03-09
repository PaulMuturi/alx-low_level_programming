#include "main.h"
int calc_sqrt(int, int);
/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: integer to find square root
  *
  *Return: integer, calculated square root
  */

int _sqrt_recursion(int n)
{
	int i = 1;

	return (calc_sqrt(n, i));
}

/**
  *calc_sqrt - iterates through whole numbers for square comparison with n
  *@n: integer to perform square root
  *@i: guess number to be incremented if need be
  *
  *Return: int, square root
  */

int calc_sqrt(int n, int i)
{
	if ((i * i) == (n))
		return (i);

	if ((i * i) > n)
		return (-1);

	return (calc_sqrt(n, i + 1));
}

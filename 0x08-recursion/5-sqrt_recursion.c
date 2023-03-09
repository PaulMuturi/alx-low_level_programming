#include "main.h"

/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: integer to find square root
  *
  *Return: integer, calculated square root
  */

int _sqrt_recursion(int n)
{
	int m;
	
	if (n ==  0)
		return (0);

	if (n == 1)
		return (1);	
		
	m = 1 + _sqrt_recursion(n);
	if ((m * m) == n)
		return (m);
	if ((m * m) > n)
		return (-1);

	return(0);
}


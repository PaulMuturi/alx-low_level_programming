#include "main.h"

/**
  *_abs - computes the absolute value of an integer
  *@n: value to compute
  *
  *Return: the computed integer value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}

	return (n);
}

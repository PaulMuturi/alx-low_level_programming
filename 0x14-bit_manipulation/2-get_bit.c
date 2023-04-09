#include "main.h"

/**
  *get_bit - returns the value of a bit at a given index
  *@n: integer to check
  *@index: bit index
  *
  *Return: value of found bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int num, m;

	if (index >= (sizeof(n) * 8))
		return (-1);

	num = _pow(2, index);

	m = n & num;

	if (m)
		return (1);
	else
		return (0);
}

/**
  *_pow: calculates power of a number
  *@a: base
  *@b: exponent
  *Return: power result
  */
int _pow(unsigned int a, unsigned int b)
{
	unsigned int prod = 1;
	
	while (b > 0)
	{
		prod *= a;
		b--;
	}

	return (prod);
}


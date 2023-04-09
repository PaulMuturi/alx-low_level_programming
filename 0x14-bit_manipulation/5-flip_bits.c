#include "main.h"
/**
  *flip_bits - counts number of bits to flip to get from
  * one number to another
  *@n: first number
  *@m: second number
  *
  *Return: resulting count
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sz = (sizeof(long int) * 8);
	unsigned int i, count = 0;
	unsigned long int a, b, num;

	for (i = 0; i < sz; i++)
	{
		num = _pow(2, i);
		a = n & num;
		b = m & num;

		if (a != b)
			count++;
	}

	return (count);
}

/**
  *_pow - calculates power of a number
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

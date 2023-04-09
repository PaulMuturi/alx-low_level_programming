#include "main.h"
/**
  *set_bit - sets the value of a bit at a given index
  *@n: pointer to n integer
  *@index: bit index
  *
  *Return: 1 on success, -1 on fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	m = _pow(2, index);
	*n = *n | m;
	return (1);
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

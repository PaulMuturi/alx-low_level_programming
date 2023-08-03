#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at given index
 *@n: pointer to integer
 *@index: index of bit to be set to 0
 *
 *Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	num = ~(_pow(2, index));
	*n = *n & num;

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

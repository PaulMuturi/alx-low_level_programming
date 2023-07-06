#include "main.h"

/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: string of 0 and 1 chars
  *
  *Return: converted unsigned integer,
  * Returns 0 if b is not 0 or 1 or is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int i, count = 0, sum = 0, exp = 0;
	char c;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		c = b[i];

		if (c != '0' && c != '1')
			return (0);

		count++;
	}

	for (i = (count - 1); i >= 0; i--)
	{
		if (exp == 0)
			exp = 1;
		else
			exp *= 2;

		sum += (b[i] - '0') * exp;
	}

	return ((unsigned int)sum);
}

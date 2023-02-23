#include "main.h"

/**
  *_isdigit - checks for digit, 0 through 9
  *@c: integer
  *
  *Return: 1 if digit, 0 if not
  */

int _isdigit(int c)
{
	int digit = 0;
	int last_digit = 9;

	while (digit <= last_digit)
	{
		if (c == (digit + '0'))
		{
			return (1);
		}

		digit++;
	}

	return (0);
}

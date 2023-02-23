#include "main.h"

/**
  *_isdigit - checks for digit, 0 through 9
  *@c: integer
  *
  *Return: 1 if digit, 0 if not
  */

int _isdigit(int c)
{
	int digit_ascii = 48;
	int last_ascii = 57;

	while (digit_ascii < last_ascii)
	{
		if (c == digit_ascii)
		{
			return (1);
		}

		digit_ascii++;
	}
	return (0);
}

#include "main.h"

/**
  *more_numbers - prints 10 times the numbers,
  *from 0-14
  */

void more_numbers(void)
{
	int i, j;
	char firstdgt, lastdgt;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		while (j <= 14)
		{
			firstdgt = j / 10;
			lastdgt = j % 10;

			if (firstdgt)
				_putchar(firstdgt + '0');
			_putchar(lastdgt + '0');

			j++;
		}

		_putchar('\n');
	}
}

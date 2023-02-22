#include "main.h"

/**
  *times_table - prints 9 times table, starting with 0
*/
void times_table(void)
{
	int i, j, firstdgt, lastdgt, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			firstdgt = product / 10;
			lastdgt = product % 10;

			if (firstdgt > 0)
			{
				_putchar(firstdgt + '0');
			}
			_putchar(lastdgt + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar('.');
				_putchar('.');
			}
			_putchar(',');
		}
		_putchar('\n');
	}
}

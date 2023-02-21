#include "main.h"

/**
  *jack_bauer - prints every minute of a day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (j < 10)
			{
				_putchar('0');
			}
			_putchar(i + '0');
			_putchar(':');

			if (i < 10)
			{
				_putchar('0');
			}
			_putchar(j + '0');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
  *jack_bauer - prints every minute of a day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, firstdigit, lastdigit;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			firstdigit = i / 10;
			lastdigit = i % 10;

			_putchar(firstdigit + '0');
			_putchar(lastdigit + '0');
			_putchar(':');

			firstdigit = j / 10;
			lastdigit = j % 10;

			_putchar(firstdigit + '0');
			_putchat(lastdigit + '0');
			_putchar('\n');
		}
	}
}

#include "main.h"
#include <string.h>

/**
  *_puts - prints a string to stdout"
  *@str: string
  *
  *Return: void
  */

void _puts(char *str)
{
	int i;
	int strlength = strlen(str);

	for (i = 0; i < strlength; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

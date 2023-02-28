#include "main.h"
#include <string.h>

/**
  *print_rev - prints a string in reverse
  *@s: string
  *
  *Return: void
  */

void print_rev(char *s)
{
	int i;
	int strlength = strlen(s);

	for (i = (strlength - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

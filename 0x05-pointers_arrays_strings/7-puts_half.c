#include "main.h"
#include <string.h>

/**
  *puts_half - prints las half of a string
  *@str: string
  *
  *Return: void
  */

void puts_half(char *str)
{
	int strlength = strlen(str);
	int i;

	for (i = ((strlength - 1) - (strlength - 1) / 2); i < strlength; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

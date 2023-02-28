#include "main.h"
#include <string.h>

/**
  *puts2 - prints every other character of a string
  *@str: string
  *
  *Return: void
  */

void puts2(char *str)
{
	int strlength = strlen(str);
	int i;

	for (i = 0; i < strlength; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

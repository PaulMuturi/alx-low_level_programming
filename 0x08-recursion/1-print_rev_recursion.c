#include "main.h"

/**
  *_print_rev_recursion - prints a string in reverse
  *@s: string to revserse
  *
  *Return: void
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);

	if (*s == '\n')
	{
		_putchar(*s);
		return;
	}

	_putchar(*s);
}

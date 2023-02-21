#include "main.h"

/**
 *print_alphabet - prints lowecase alphabet letters
 *
 *Return: void
*/
void print_alphabet(void)
{
	char alphaletter = 'a';

	while (alphaletter <= 'z')
	{
		_putchar(alphaletter);
		alphaletter++;
	}
	_putchar('\n');
}

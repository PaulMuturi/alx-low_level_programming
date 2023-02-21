#include "main.h"
/**
  *main - entry point to the program
  *
  *Return: exit status of the program
 */
int main(void)
{
	char alphaletter = 'a';

	while (alphaletter <= 'z')
	{
		_putchar(alphaletter);
		alphaletter++;
	}
	_putchar('\n');

	return (0);
}

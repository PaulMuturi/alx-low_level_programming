#include "main.h"
/**
  *main - entry point to the program
  *
  *Return: exit status of the program
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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

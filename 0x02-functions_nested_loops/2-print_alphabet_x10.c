#include "main.head"

/**print_alphabet_x10 - prints alpahet in lowercase 10 times
  *
  *Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char alphaletter;

	for (i = 0; i < 10; i++)
	{
		alphaletter = 'a';

		while (alphaletter <= 'z')
		{
			_putchar(alphaletter);
			alphaletter++;
		}
		_putchar('\n');
	}
}



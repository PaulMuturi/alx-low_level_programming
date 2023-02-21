#include "main.h"
/**
  *main - entrypoint to the program
  *
  *Return: exit status of the program
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}

#include "main.h"

/**
  *main - the program prints its name
  *@argc: arguments count
  *@argv: arguments vector - array
  *
  *Return: 0
  */
int main(int __attribute__ ((unused)) argc, char **argv)
{
	int i;
	char *pname = argv[0];

	for (i = 0; pname[i] != '\0'; i++)
	{
		_putchar(pname[i]);
	}

	_putchar('\n');

	return (0);
}


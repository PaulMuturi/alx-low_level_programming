#include "main.h"

/**
  *main - prints the number of arguments passed into it
  *@argc: arguments count
  *@argv: arguments vector - array
  *
  *Return: 0
  */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int checksym(char *);
/**
  *main - adds positive numbers
  *@argc: arguments count
  *@argv: arguments vector / array
  *
  *Return: 0 on success, else 1
  */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	char *num;
	int no_sym;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = argv[i];
			no_sym = checksym(num);

			if (no_sym)
				sum += atoi(num);
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}

/**
  *checksym - check for any non digit symbol
  *@n: number string
  *
  *Return: 1 if no symbol, 0 if symbol found
  */
int checksym(char *n)
{
	int j;

	for (j = 0; n[j] != '\0'; j++)
	{
		if (!(n[j] >= '0' && n[j] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}

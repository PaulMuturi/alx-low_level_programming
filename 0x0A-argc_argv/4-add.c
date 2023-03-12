#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - adds positive numbers
  *@argc: arguments count
  *@argv: arguments vector / array
  *
  *Return: 0 on success, else 1
  */

int main(int argc, char **argv)
{
	int i, num, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (!num)
			{
				printf("Error\n");
				return (1);
			}

			if (num > 0)
				sum += num;
		}

		printf("%d\n", sum);
	}

	return (0);
}

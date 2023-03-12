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
	int cents;
	int coin_25 = 25;
	int coin_10 = 10;
	int coin_5 = 5;
	int coin_2 = 2;
	int coin_1 = 1;
	int balance;
	int coins = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
	{
		if (cents >= coin_25)
		{
			coins += cents / coin_25;
			balance = cents % coin_25;
		}
		if (balance >= coin_10)
		{
			coins += balance / coin_10;
			balance = balance % coin_10;
		}
		if (balance >= coin_5)
		{
			coins += balance / coin_5;
			balance = balance % coin_5;
		}
		if (balance >= coin_2)
		{
			coins += balance / coin_2;
			balance = balance % coin_2;
		}
		if (balance >= coin_1)
		{
			coins += balance / coin_1;
			balance = balance % coin_1;
		}

		printf("%d\n", coins);
	}

	return (0);
}

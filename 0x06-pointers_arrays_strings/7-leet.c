#include "main.h"
#include <string.h>

/**
  *leet - encodes a string into 1337
  *@a: string
  *
  *Return: encoded string
  */

char *leet(char *a)
{
	int i, j;
	int strnlen = strlen(a);
	char let [5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	int symcount = 5;
	int case_diff = ('a' - 'A');

	for (i = 0; i < strnlen; i++)
	{
		for (j = 0; j < symcount; j++)
		{
			if (a[i] == let[j] || a[i] == (let[j] + case_diff))
			{
				a[i] = num[j];
			}
		}
	}

	return (a);
}

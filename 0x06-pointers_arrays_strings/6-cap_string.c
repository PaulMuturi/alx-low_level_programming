#include "main.h"
#include <string.h>

/**
  *cap_string - Capitalizes all words of a string
  *@a: string
  *
  *Return: pointer to coverted string, a
  */

char *cap_string(char *a)
{
	int strn_len = strlen(a);
	int i;
	int case_diff = 'a' - 'A';
	int capitalize = 1;

	for (i = 0; i <= strn_len; i++)
	{
		if (a[i] == ' ' || a[i] == '\n' || a[i] == '.' || a[i] == '	')
			capitalize = 1;

		if (a[i] >= 'a' && a[i] <= 'z' && capitalize)
		{
			a[i] = a[i] - case_diff;
		}

		if (a[i] != ' ' && a[i] != '\n' && a[i] != '.' && a[i] != '	')
			capitalize = 0;

	}

	return (a);
}



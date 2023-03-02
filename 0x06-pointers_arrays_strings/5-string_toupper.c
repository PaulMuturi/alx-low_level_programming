#include "main.h"
#include <string.h>

/**
  *string_toupper - changes all lowercase letters of a string to uppercase
  *@a: string
  *
  *Return: pointer to coverted string, a
  */

char *string_toupper(char *a)
{
	int strn_len = strlen(a);
	int i;
	int case_diff = 'a' - 'A';

	for (i = 0; i < strn_len; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - case_diff;
		}
	}

	return (a);
}



#include "main.h"
#include <string.h>

/**
  *rev_string - reverses a string"
  *@s: string
  *
  *Return: void
  */

void rev_string(char *s)
{
	int strlength = strlen(s);
	int i;
	char str[1000];

	strcpy(str, s);

	for (i = 0; i < strlength; i++)
	{
		s[i] = str[((strlength - 1) - i)];
	}


}

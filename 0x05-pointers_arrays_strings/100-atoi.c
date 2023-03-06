#include "main.h"
#include <string.h>

/**
  *_atoi - converts a sring to integer
  *@s: string
  *
  *Return: int
  */

int _atoi(char *s)
{
	int i;
	char neg = '+';
	char *int_isolated[1000];
	int strlength = strlen(s);

	for (i = 0; i < strlength; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (neg != '-' && i > 0 && s[i - 1])
			{
				neg = '-';
			}

		}

	}
}

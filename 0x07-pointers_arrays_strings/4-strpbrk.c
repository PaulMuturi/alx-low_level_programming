#include "main.h"
#include <string.h>

/**
  *_strpbrk - searches a string for any of a set of bytes
  *@s: string
  *@accept: substring
  *
  *Return: pointer to the byte in s, NULL if none
  */

char *_strpbrk(char *s, char *accept)
{
	int slen = strlen(s);
	int acceptlen = strlen(accept);
	int i, j;

	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < acceptlen; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}

#include "main.h"
#include <string.h>
/**
  *_strspn - gets the length of a prefix substring
  *@s: string
  *@accept: char bytes to look for
  *
  *Return: number of bytes in the initial segment of s
  * consisting only bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int stlen = strlen(s);
	int spnlen = strlen(accept);
	unsigned int i, j;

	for (i = 0; i <= (unsigned int)spnlen; i++)
	{
		for (j = 0; j <= (unsigned int)stlen; j++)
		{
			if (s[j] == accept[i])
			{
				return (j + 1);
			}
		}
	}

	return ((unsigned int)0);
}

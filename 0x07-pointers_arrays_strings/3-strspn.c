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
	int i, j;
	unsigned int prefixcount = 0;

	for (i = 0; i < stlen; i++)
	{
		for (j = 0; j < spnlen; j++)
		{
			if (s[i] == accept[j])
			{
				prefixcount++;
				j = spnlen + 1;
			}
			else if (j == (spnlen - 1))
			{
				i = stlen + 1;
			}
		}
	}

	return (prefixcount);
}

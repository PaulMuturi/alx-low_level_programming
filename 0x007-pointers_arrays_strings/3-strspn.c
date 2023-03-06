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
	unsigned int found_byte = 0;

	for (i = 0; i <= spnlen; i++)
	{
		for (j = 0; j <= stlen; j++)
		{
			if (s[j] == accept[i])
			{
				found_byte++;
				j = stlen + 1;
			}
		}
	}

	return (found_byte);
}

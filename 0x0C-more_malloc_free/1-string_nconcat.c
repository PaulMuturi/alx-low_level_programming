#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  *string_nconcat - concatenates two string
  *@s1: pointer to string 1
  *@s2: pointer to string 2
  *@n: number of s2 char to be concatenated
  *
  *Return: pointer to concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, totlen;
	char *ns;

	if (s1)
	{
		s1len = strlen(s1);
	}
	else
		s1len = 0;
	if (s2)
	{
		s2len = strlen(s2);

		if (s2len >= n)
			s2len = n;
	}
	else
		s2len = 0;

	totlen = s1len + s2len;
	ns = malloc((sizeof(char) * totlen) + 1);

	if (!ns)
		return (NULL);

	return (str_join(s1, s2, s1len, s2len, ns));
}

/**
 *str_join - concatenates all strings given
 *@s1: string 1
 *@s2: string 2
 *@l1: string 1 length
 *@l2: string 2 length
 *@ns: pointer to resultin joined string
 *
 *Return: pointer to concat string
 */
char *str_join(char *s1, char *s2, unsigned int l1, unsigned int l2, char *ns)
{
	unsigned int i, j;
	unsigned int totlen = l1 + l2;

	j = 0;
	while (j < totlen)
	{
		for (i = 0; i < l1; i++)
		{
			ns[j] = s1[i];
			j++;
		}

		for (i = 0; i < l2; i++)
		{
			ns[j] = s2[i];
			j++;
		}
	}

	ns[j] = '\0';

	return (ns);
}

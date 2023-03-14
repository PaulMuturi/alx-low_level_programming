#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - concatenates two strings
  *@s1: string 1
  *@s2: strings 2
  *
  *Return: pointer to concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int s1len, s2len;
	char *ns;
	int totlen;

	if (s1)
		s1len = strlen(s1);
	else
		s1len = 0;

	if (s2)
		s2len = strlen(s2);
	else
		s2len = 0;

	totlen = s1len + s2len;

	ns = malloc((sizeof(char) * totlen) + 1);

	if (ns == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		ns[i] = s1[i];

	for (j = 0 ; j < s2len; j++)
	{
		ns[i] = s2[j];
		i++;
	}
	ns[i] = '\0';

	return (ns);
}


#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  *_strdup - returns a pointer to a newly allocated space in
  * memory, which contains a copy of he string given as parameter
  *@str: string to copy
  *
  *Return: pointer to copied string
  */

char *_strdup(char *str)
{
	int i;
	int slen;
	char *ns = NULL;

	if (str)
	{
		slen = strlen(str);
		ns = malloc((sizeof(char) * slen) + 1);
	}

	if (ns == NULL)
		return (NULL);

	for (i = 0; i <= slen; i++)
	{
		ns[i] = str[i];
	}

	return (ns);
}

#include "main.h"
#include <string.h>

/**
  *_strchr - locates a character in a string
  *@s: string
  *@c: character to locate
  *
  *Return: pointer to found character or
  *NULL if not found
  */

char *_strchr(char *s, char c)
{
	int i;
	int stlen = strlen(s);

	for (i = 0; i < stlen; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}

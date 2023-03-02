#include "main.h"
#include <string.h>

/**
  *_strncpy - copies a string
  *@dest: destination string
  *@src: string to copy
  *@n: integer, copy limit
  *
  *Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen = strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (srclen < n)
		dest[i] = '\0';

	return (dest);
}


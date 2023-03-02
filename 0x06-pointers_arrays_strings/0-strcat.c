#include "main.h"
#include <string.h>

/**
  *_strcat - concatenates two strings
  *@dest: string 1
  *@src: string 2
  *
  *Return: pointer to concatenated dest string
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int destlen = strlen(dest);
	int srclen = strlen(src);

	for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}

	return (dest);
}

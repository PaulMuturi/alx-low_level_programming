#include "main.h"
#include <string.h>

/**
  *_strncat - concatenates two strings
  *@dest: string 1
  *@src: string 2
  *@n: integer, bytes to concat from src
  *
  *Return: pointer to concatenated dest string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];

	for (; i < n; i++)
		dest[destlen + i] = '\0';

	return (dest);
}

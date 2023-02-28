#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *_strcpy - copies the string pointed to by src
  * to the buffer pointd to by dest
  *@dest: pointer to string buffer
  *@src: pointer to string
  *
  *Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;
	int strlength = strlen(src);

	for (i = 0; i < strlength; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

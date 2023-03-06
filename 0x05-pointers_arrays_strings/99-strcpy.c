#include "main.h"
#include <string.h>

/**
*_strcpy - copies the string pointed to by src
*to the buffer pointed to by dest
*@dest: string buffer
*@src: string
*
*Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int strlength = strlen(src);

	for (i = 0; i <= strlength; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

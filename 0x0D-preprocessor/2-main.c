#include <stdio.h>
#include "main.h"

/**
*main - prints the name of the file it was compiled from
*Return: void
*/
int main(void)
{
	int i = 0;
	char *s = __FILE__;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}

	putchar('\n');

	return (0);
}

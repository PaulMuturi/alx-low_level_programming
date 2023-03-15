#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  *argstostr - concatenates all the arguments of the program
  *@ac: integer
  *@av: pointer to pointer of a string
  *
  *Return: pointer to concatenated string
  */

char *argstostr(int ac, char **av)
{
	int i;
	unsigned int j;
	char *ns;
	unsigned int avlen = 0;
	unsigned int newln = 0;
	int charcount = 0;
	char nullbyte = '\0';

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		avlen += strlen(av[i]);
		newln++;
	}

	ns = malloc(sizeof(char) * (avlen + newln) + sizeof(nullbyte));

	if (!ns)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			ns[charcount] = av[i][j];
			charcount++;
		}

		ns[charcount] = '\n';
		charcount++;
	}

	ns[charcount] = '\0';

	return (ns);
}

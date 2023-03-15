#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  *strtow - splits a string into  words (array of words)
  *@str: pointer to a string
  *
  *Return: pointer to an array of string
  */

char **strtow(char *str)
{
	int i, j, k;
	int wrdcnt = 0;
	int wrdlen;
	char **wrds = NULL;
	int slen;
	char *scopy;
	int totchar = 0;
	char termbyte = '\0';
	int idxpos;

	if (!str || !*str)
		return (NULL);
	else
	{
		slen = strlen(str);
		scopy = malloc((sizeof(char) * slen) + 1);

		for (i = 0; i <= slen; i++)
			scopy[i] = str[i];
	}

	for (i = 0; i < slen; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			wrdcnt++;
		
		if (i == 0 && str[i] != ' ')
			wrdcnt++;

		if (str[i] != ' ')
			totchar++;
	}

	wrds = malloc(sizeof(char *) * (wrdcnt + 1));
	idxpos = 0;

	for (i = 0; i < wrdcnt; i++)
	{
		wrdlen = 0;
	
		while (str[idxpos] != '\0')
		{
			if (str[idxpos] != ' ')
			{
				wrdlen++;
			}
			else if (wrdlen > 0 && str[idxpos] == ' ' && str[idxpos - 1] != ' ')
			{
				idxpos++;
				break;
			}

			idxpos++;
		}

		wrds[i] = malloc((sizeof(char) * wrdlen) + sizeof(termbyte));

		if (!wrds[i])
		{
			for (j = 0; j < i; j++)
				free(wrds[j]);
			free(wrds);
			free(scopy);
			return (NULL);
		}

		for (k = 0; k <= wrdlen; k++)
		{

			if (k == wrdlen)
			{
				wrds[i][k] = '\0';
				break;
			}
			while(*scopy != '\n')
			{
				if (*scopy != ' ')
				{
					wrds[i][k] = *scopy;
					scopy++;
					break;
				}

				scopy++;
			}
		}
	}
	wrds[i] = NULL;

	return(wrds);
}

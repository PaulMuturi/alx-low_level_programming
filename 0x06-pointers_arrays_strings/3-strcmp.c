#include "main.h"
#include <string.h>

/**
  *_strcmp - compares two strings
  *@s1: string 1
  *@s2: string2
  *
  *Return: integer, 0 if similar
  */

int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	if (s1_len == s2_len || s1_len > s2_len)
	{
		for (i = 0; i < s1_len; i++)
		{
			if (s1[i] - s2[i] != 0)
			{
				return (s1[i] - s2[i]);
			}
		}
		return (0);
	}
	else if (s1_len < s2_len)
	{
		for (i = 0; i < s2_len; i++)
		{
			if (s1[i] - s2[i] != 0)
			{
				return (s1[i] - s2[i]);
			}
		}
	}


	return (0);
}

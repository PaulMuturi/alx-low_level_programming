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
	char s1_sum = '0';
	char s2_sum = '0';

	for (i = 0; i < s1_len; i++)
		s1_sum += s1[i];

	for (i = 0; i < s2_len; i++)
		s2_sum += s2[i];

	return ((s1_sum - s2_sum));
}

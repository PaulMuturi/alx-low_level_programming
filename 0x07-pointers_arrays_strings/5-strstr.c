#include "main.h"
#include <string.h>

/**
  *_strstr - locates a substring in another string
  *@haystack: string to be searched
  *@needle: substring to be searched
  *
  *Return: pointer to the beginning of lovcated substring
  *NULL if not found
  */

char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);
	int haystack_len = strlen(haystack);
	int i,j;
	int substr_count = 0;

	for (i = 0; i < haystack_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i] == needle[j])
			{
				substr_count++;
			}
			else if (haystack[i] != needle[j] && substr_count < needle_len)
			{
				substr_count = 0;
				j = needle_len;
			}

			if (substr_count == needle_len)
			{
				return (&(haystack[i]));
			}
		}
	}

	return (NULL);
} 

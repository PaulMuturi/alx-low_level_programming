#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  *_strstr - locates a substring in another string
  *@haystack: string to be searched
  *@needle: substring to be searched
  *
  *Return: pointer to the beginning of located substring
  *NULL if not found
  */

char *_strstr(char *haystack, char *needle)
{
	int match_len = 0;
	int needle_len = strlen(needle);
	char *match_index = NULL;
	char *tmpned;

	while (*haystack != '\0')
	{
		if (haystack && *haystack == *needle)
		{
			match_index = haystack;
			tmpned = needle;

			while (*tmpned != '\0' && *haystack++ == *tmpned++)
			{
				match_len++;
			}

			if (match_len != needle_len)
			{
				match_len = 0;
				haystack = match_index;
				match_index = NULL;
			}
		}

		if (*haystack != '\0')
			haystack++;
	}

	return (match_index);
}

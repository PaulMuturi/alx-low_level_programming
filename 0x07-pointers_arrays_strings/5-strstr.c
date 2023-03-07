#include "main.h"
#include <string.h>

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
	char *match_index;
	char *tmpned;

	if (!needle)
		return (haystack);

	while (haystack && *haystack != '\0')
	{
		if (*haystack == *needle)
		{
			match_index = haystack;
			tmpned = needle;

			while (*haystack++ == *tmpned++)
			{
				if (*tmpned != '\0')
				{
					match_len++;
				}
			}

			if (match_len == needle_len)
				return (match_index);

			haystack = match_index;
		}

		haystack++;
	}

	return ("");
}

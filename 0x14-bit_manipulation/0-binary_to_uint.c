#include "main.h"

/**
  *binary_to_uint - converts a binary number to a number
  *@b: pointer to a string
  *Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	char c;

	unsigned int sum = 0, factor = 1;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = (len - 1); i >= 0; i--)
	{
		c = b[i];
		if (c != '1' && c != '0')
			return (0);

		sum += (factor * (c - '0'));
		factor *= 2;
	}
	return (sum);
}

/**
  *_strlen - counts number of characters in a string
  *@b: pointer to string
  *Return: number of chars in string
  */
int _strlen(const char *b)
{
	int i = 0;
	int len = 0;

	while (b[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

#include "main.h"

/**
  *_isupper - checks for uppercase characters
  *@c: character
  *
  *Return: 1 if upper, 0 if not
  */

int _isupper(int c)
{
	char upperletter = 'A';

	while (upperletter <= 'Z')
	{
		if (c == upperletter)
		{
			return (1);
		}

		upperletter++;
	}
	return (0);
}

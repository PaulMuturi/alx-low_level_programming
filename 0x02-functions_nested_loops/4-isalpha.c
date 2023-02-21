#include "main.h"

/**
  *_isalpha - checks for alphabetic character
  *@c: character to be evaluated
  *
  *Return: value 1 if letter is alphabetic and 0 if otherwise
*/
int _isalpha(int c)
{
	char lowerletter = 'a';
	char upperletter = 'A';

	while (lowerletter <= 'z')
	{
		if (c == lowerletter)
			return (1);
		lowerletter++;
	}

	while (upperletter <= 'Z')
	{
		if (c == upperletter)
			return (1);
		upperletter++;
	}

	return (0);
}

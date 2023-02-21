#include "main.h"

/**
  *_islower - check for givn character is lowercase
  *@c: character to be evaluated
  *
  *Return: return 1 if character is lower and 0 if otherwise
 */
int _islower(int c)
{
	char alphaletter = 'a';

	while (alphaletter <= 'z')
	{
		if (c == alphaletter)
		{
			return (1);
		}
	}
	return (0);
}

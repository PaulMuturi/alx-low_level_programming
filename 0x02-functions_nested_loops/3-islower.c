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
	int isloweralpha = 0;

	while (alphaletter <= 'z')
	{
		if (c == alphaletter)
		{
			isloweralpha = 1;
			break;
		}
		alphaletter++;
	}
}

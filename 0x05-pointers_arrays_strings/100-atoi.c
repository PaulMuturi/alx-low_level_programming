#include "main.h"
#include <stdio.h>
int _pow(int, int);
/**
  *_atoi - converts a sring to integer
  *@s: string
  *
  *Return: int
  */

int _atoi(char *s)
{
	int i;
	int isneg = 0;
	int multiplier = 0;
	int sum = 0;
	char *firstdgt = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{	
			if (!firstdgt)
			{
				firstdgt = &(s[i]);

				if (s[i - 1] == '-')
					isneg = 1;
			}

			multiplier++;
		}
		else if(firstdgt)
			break;
	}

	if ((firstdgt))
	{
		for (i = 0; i < multiplier; i++)
		{
			sum += (*firstdgt - '0') * (_pow(10, (multiplier - i)));
			firstdgt++;
		}

		if (isneg)
			sum *= -1;
	}

	return (sum);
}

/**
  *_pow - power of a number
  *@n: int to power
  *@p: exponent
  *
  *Return: int, power result
  */

int _pow(int n, int p)
{
	int i = 1;
	int prod = 1;
	
	while (i < p)
	{
		prod *= n;
		i++;
	}

	return (prod);
}

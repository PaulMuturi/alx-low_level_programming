#include "main.h"
#include <stdio.h>
int _pow(int, int);
int _isoperator(char);
char _opeval(char, char);
int _isdigit(char);
/**
  *_atoi - converts a sring to integer
  *@s: string
  *
  *Return: int
  */

int _atoi(char *s)
{
	int i;
	char oper = ' ';
	int multiplier = 0;
	int sum = 0;
	char *firstdgt = NULL;
	char prev = ' ';
	char cur = ' ';
	int isdgt;

	for (i = 0; s[i] != '\0'; i++)
	{
		isdgt = _isdigit(s[i]);

		if (_isoperator(s[i]))
		{
			cur = s[i];
			if (i > 0 && _isoperator(s[i - 1]))
				prev = s[i - 1];
			else
				prev = ' ';

			if (prev != ' ' && oper != ' ')
				prev = oper;

			oper = _opeval(prev, cur);
		}
		else if (!isdgt)
		{
			cur = ' ';
			prev = ' ';
			oper = ' ';
		}

		if (isdgt)
		{
			if (!firstdgt)
			{
				firstdgt = &(s[i]);

			}

			multiplier++;
		}
		else if (firstdgt)
			break;
	}

	if ((firstdgt))
	{
		for (i = 0; i < multiplier; i++)
		{
			sum += (*firstdgt - '0') * (_pow(10, (multiplier - i)));
			firstdgt++;
		}

		if (oper == '-')
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

/**
  *_isoperator - checks if character is - or +
  *@c: character
  *
  *Return: 1 if true, otherwise 0
  */
int _isoperator(char c)
{
	if (c == '+' || c == '-')
		return (1);

	return (0);
}

/**
  *_opeval - does arithmetic of two operands following each other
  *@prev: operator 1
  *@cur: operator 2
  *
  *Return: resulting operator
  */
char _opeval(char prev, char cur)
{
	if ((prev == '-' && cur == '-') || (prev == '+' && cur == '+'))
		return ('+');

	if ((prev == '-' && cur == '+') || (prev == '+' && cur == '-'))
		return ('-');

	return (cur);
}

/**
  *_isdigit - checks if character is digit
  *@c: character
  *
  *Return: 1 if true,otherwise 0
  */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}


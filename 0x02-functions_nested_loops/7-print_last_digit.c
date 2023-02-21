#include "main.h"
#include <stdlib.h>
long int abs_long(int);

/**
  *print_last_digit - prints last digit of a number
  *@n: input integer number
  *
  *Return: last integer digit of the input number
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = abs_long(n) % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}

/**
 *abs_long - Takes in int and outputs its sbsolute value in long format
 *This is to handle INT_MIN overflow issues
 *@j: int to compute
 *
 *Return: computed abs in long format
*/
long int abs_long(int j)
{
	int long m = (long)j;
	if (m < 0)
	{
		return (m * long(-1));
	}

	return (m);
}

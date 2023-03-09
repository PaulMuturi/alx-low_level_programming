#include "main.h"

int checkprime(int, int);
/**
  *is_prime_number - checks for prime number
  *@n: integer to be evaluated
  *
  *Return: int, 1 if prime, otherwise 0
  */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);

	return (checkprime(n, i));
}

/**
  *checkprime - finds numbers (i) divisible by n taht are less than n
  *if found then n is not prime
  *@n: number to evaluate
  *@i: divisor number
  *
  *Return: 1 if prime, otherwise 0
  */

int checkprime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	else
		return (checkprime(n, (i + 1)));
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Program entry point. Prints negative and positive numbers
*
*Return: exit status of the program
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	}

	return (0);
}

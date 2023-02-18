#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Program entry point. Prints last digit of an int"
*
*Return: exit status of the program"
*/
int main(void)
{
	int n;
	char fdigit[3];
	int last_digit = atoi(fdigit);
	char int_str[15];
	int i = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	sprintf(int_str, "%d\n", n);

	while (int_str[i] != '\n')
	{
		i++;
	}
	if (int_str[0] == '-' && int_str[i - 1] != '0')
	{
		sprintf(fdigit, "%c%c", int_str[0], int_str[i - 1]);
	}
	else
	{
		sprintf(fdigit, "%c", int_str[i - 1]);
	}

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}


	if (last_digit != 0 && last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}


	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}

	return (0);
}

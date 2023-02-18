#include <stdio.h>

/**
*main - Entry point of the program.
*
*Return: Exit status of the program"
*/
int main(void)
{
	int first_digit, last_digit;
	int digit = 0;

	while (digit < 100)
	{
		first_digit = digit / 10;
		last_digit = digit % 10;

		if (last_digit > first_digit)
		{
			if (digit != 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(first_digit + '0');
			putchar(last_digit + '0');
		}
		digit++;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
*main - Entry point of the program.
*
*Return: Exit status of the program"
*/
int main(void)
{
	int first_digit, second_digit, third_digit;
	int digit = 1;

	while (digit < 1000)
	{
		first_digit = digit / 100;
		second_digit = digit % 100;
		second_digit = second_digit / 10;
		third_digit = digit % 10;

		if (third_digit > second_digit && second_digit > first_digit)
	{
			if (digit > 10)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			putchar(third_digit + '0');
		}
		digit++;
	}

	putchar('\n');
	return (0);
}

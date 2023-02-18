#include <stdio.h>

/**
*main - Entry point of the program"
*
*Return: Exit status of the program"
*/
int main(void)
{
	int current_int = 0;

	while (current_int < 10)
	{
		putchar(current_int + '0');
		if (current_int < 9)
		{
			putchar(',');
			putchar(' ');
		}
		current_int++;
	}

	putchar('\n');
	return (0);
}

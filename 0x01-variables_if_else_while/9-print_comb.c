#include <stdio.h>

/**
*main - Entry poitn of the program"
*
*Return: Exit status of the program"
*/
int main(void)
{
	int current_int = 0;

	while (current_int < 10)
	{
		putchar(current_int + '0');
		putchar(',');
		if (current_int < 9)
			putchar(' ');
		current_int++;
	}

	putchar('\n');
	return (0);
}

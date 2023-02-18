#include <stdio.h>

/**
*main - Entry poin of th program"
*
*Return: Exit status of the program"
*/
int main(void)
{
	int current_int = 0;

	while (current_int < 10)
	{
		putchar(current_int);
		current_int++;
	}

	putchar('\n');
	return (0);
}

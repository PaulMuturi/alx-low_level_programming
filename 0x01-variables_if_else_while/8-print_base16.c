#include <stdio.h>

/**
*main - Entry point of the program"
*
*Return: Exit status of the program"
*/
int main(void)
{
	char current_int = 0;
	char hex_letter;

	while (current_int < 10)
	{
		printf("%d", current_int);
		current_int++;
	}

	hex_letter = 'a';

	while (hex_letter <= 'f')
	{
		putchar(hex_letter);
		hex_letter++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
*main - Entry point of the program"
*
*Return: Exit status of the program"
*/
int main(void)
{
	char current_char = 'z';

	while (current_char >= 'a')
	{
		putchar(current_char);
		current_char--;
	}

	putchar('\n');
	return (0);
}

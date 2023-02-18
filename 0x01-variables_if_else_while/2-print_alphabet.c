#include <stdio.h>

/**
*main - Entry poin of th program"
*
*Return: Exit status of the program"
*/
int main(void)
{
	char current_char = 'a';

	while (current_char <= 'z')
	{
		putchar(current_char);
		current_char++;
	}
}

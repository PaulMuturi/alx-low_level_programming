#include "main.h"

/**
  *main - test if positive_or_negative functions
  *returns correct output on integer 0 input"
  *
  *Return: 0
  */
int main(void)
{
	int result;

	char *correct_str = "0 is zero";

	result = positive_or_negative(0);
	if (result == correct_str)
	{
		return (0);
	}
	else
	{
		printf("Incorrect output for input: 0)");
		return (1);
	}
}

#include "3-calc.h"
/**
  *op_add - returns the sum of two numbers (integers)
  *@a: intger operand 1
  *@b: integer operand 2
  *
  *Return: result , integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - returns the difference of two numbers
  *@a: intger operand 1
  *@b: integer operand 2
  *
  *Return: result , integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - returns the product of two numbers
  *@a: intger operand 1
  *@b: integer operand 2
  *
  *Return: result , integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - returns the result of division of two numbers
  *@a: intger operand 1
  *@b: integer operand 2
  *
  *Return: result , integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  *op_mod - returns the remainder of dividing one number with another
  *@a: intger operand 1
  *@b: integer operand 2
  *
  *Return: result , integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

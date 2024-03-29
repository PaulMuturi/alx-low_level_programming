#include "3-calc.h"
/**
  *get_op_func - selects the correct fucntion to perform the
  *operation asked by the user
  *@s: pointer to operator character
  *
  *Return: integer
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].f))
	{
		if (*(ops[i].op) == *s)
			return (*(ops[i].f));
		i++;
	}

	printf("Error\n");
	exit(99);
}

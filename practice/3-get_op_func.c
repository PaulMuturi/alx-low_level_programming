#include "3-calc.h"
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
	
	//op_t opp = {"+", opp_add}
	//s = 
	int i = 0;

	while (ops[i].f != NULL)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}

	printf("Error");
	exit(99);
}

#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a, b, res;
	char *op;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	
	if (strlen(op) > 1)
	{
		printf("Error\n");
		exit (99);
	}

	res = (*get_op_func(op))(a, b);
	                //op_add(a, b);
	printf("%d\n", res);
}

#include "3-calc.h"
/**
  *main - entry point of the program
  *@argc: arguments count
  *@argv: arguments string array
  *
  *Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int opd1, opd2, res;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opd1 = atoi(argv[1]);
	opd2 = atoi(argv[3]);
	op = argv[2];

	res = get_op_func(op)(opd1, opd2);

	printf("%d\n", res);

	return (0);
}

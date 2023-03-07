#include "main.h"

/**
  *print_chessboard - prints the chessboard
  *@a: 2D string array
  *
  *Return: void
  */

void print_chessboard(char (*a)[8])
{
	int dim = 8;
	int i, j;

	for (i = 0; i < dim; i++)
	{
		for (j = 0; j < dim; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}

}

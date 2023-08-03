#include "main.h"

/**
  *get_endianness - checks endianness
  *Return: 0 if big endian, 1 in little endian
  */

int get_endianness(void)
{
	int num = 1;
	char *numptr = (char *)&num;

	if (*numptr == 0)
		return (0);

	return (1);
}

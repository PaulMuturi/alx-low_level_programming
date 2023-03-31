#include "lists.h"
/**
  *before_main - writes a string before main is executed"
  */
void before_main(void)
{
	char *s1 = "You're beat! and yet, you must allow,\n";
	char *s2 = "I bore my house upon my back!\n";

	printf("%s%s", s1, s2);
}

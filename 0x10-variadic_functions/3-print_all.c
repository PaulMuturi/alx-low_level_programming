#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_all - prints anything
  *@format: list of all types of arguments passed to the function
  *
  *Return: void
  */

void print_all(const char * const format, ...)
{
	inp_type typs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	int i, j, is_sep = 0;
	va_list data;
	char *separator = ", ", c;

	i = 0;
	va_start(data, format);

	while (format[i] != '\0')
	{
		c = format[i];
		j = 0;

		while (typs[j].f)
		{
			if (typs[j].sym == c)
			{
				if (is_sep)
					printf("%s", separator);

				(typs[j].f)(&data);
				j++;
				is_sep = 1;
				break;
			}

			j++;
		}
		i++;
	}

	printf("\n");
	va_end(data);
}

/**
 *print_char - prints character
 *@input: content to be printed
 *
 *Return: void
 */
void print_char(va_list *input)
{
	printf("%c", va_arg(*input, int));
}

/**
 *print_str - prints string
 *@input: content to be printed
 *
 *Return: void
 */

void print_str(va_list *input)
{
	printf("%s", va_arg(*input, char *));
}


/**
 *print_float - prints float
 *@input: content to be printed
 *
 *Return: void
 */
void print_float(va_list *input)
{
	printf("%f", va_arg(*input, double));
}


/**
 *print_int - prints integer
 *@input: content to be printed
 *
 *Return: void
 */
void print_int(va_list *input)
{
	printf("%d", va_arg(*input, int));
}


#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list *);
void print_str(va_list *);
void print_int(va_list *);
void print_float(va_list *);

/**
  *struct input_types - custom data type
  *@sym: symbol for data type
  *@f: pointer to function
  */
typedef struct input_types
{
	char sym;
	void (*f)(va_list *);
} inp_type;


#endif

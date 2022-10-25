#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

void print_char(va_list fmt);
void print_int(va_list fmt);
void print_float(va_list fmt);
void print_string(va_list fmt);

/**
* struct argument - stucture
* @argument: letter passed in first argument
* @func: pointer to appropriate function
*/
typedef struct argument
{
	char argument;
	void (*func)(va_list);
} argument;

#endif

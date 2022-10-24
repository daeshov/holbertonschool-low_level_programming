#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings followed by new line
 *@separator: string to be printed
 *@n: number of strings passed to the function
 *Return: void
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	if (n > 0)

	{
		va_start(str, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(str, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
		}
	}
		va_end(str);
			printf("\n");
}

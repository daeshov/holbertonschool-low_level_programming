#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers followed by new line
 *@separator: string to be printed
 *@n: number of integers passed to the function
 *Return: void
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (n > 0)
	{
		va_start(num, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(num, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(num);
	}

			printf("\n");
}

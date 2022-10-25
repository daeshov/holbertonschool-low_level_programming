#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything followed by new line
 *@format: list of types of arguments passed
 *
 *Return: void
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list fmt;
	int i, d;
	char *q = "";	
	argument datatype[] = { 
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		};

	va_start(fmt, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		d = 0;
		while (d < 4)
		{
			if (datatype[d].argument == format[i])
			{
				printf("%s", q);
				datatype[d].func(fmt);
				q = ", ";
			}
			d++;
		}
		i++;
	}
	va_end(fmt);
	printf("\n");
}

/**
 *
 *
 *
 *
 */
void print_char(va_list fmt)
{
	printf("%c", va_arg(fmt, int));
}


/**
 *
 *
 *
 *
 */
void print_int(va_list fmt)
{
        printf("%d", va_arg(fmt, int));
}


/**
 *
 *
 *
 *
 */
void print_float(va_list fmt)
{
        printf("%f", va_arg(fmt, double));
}


/**
 *
 *
 *
 *
 */
void print_string(va_list fmt)
{
	char *str;

	str = va_arg(fmt, char *);
	if (str == NULL)
		str = "(nil)";
        printf("%s", str);
}

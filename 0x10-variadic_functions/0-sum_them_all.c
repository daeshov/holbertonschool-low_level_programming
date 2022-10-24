#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown amount of arguments
 *@n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, c;

	va_start(list, n);

		for (i = 0; i < n; i++)
			c += va_arg(list, unsigned int);
	va_end(list);
		if (n == 0)
		return (0);
	return (c);
}

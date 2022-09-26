#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 * only use _putchar function to print
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}

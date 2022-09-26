#include "main.h"

/**
 * print_diagonal - line on terminal
 * @n: is the number of times the character "/" should be printed
 * diagonal should end with "/n"
 * only use _putchar function to print
 * if "n" is 0 or less function should only print "/n"
 */
void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

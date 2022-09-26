#include "main.h"
/**
 * print_numbers - print 0 to 9, followed by new line
 *
 * Description: prints numbers 0-9
 * Return: no return
 */
void print_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
	_putchar(i);
}
_putchar('\n');
}

#include "main.h"
#include "_putchar.c"
/**
 * print_numbers - print 0 to 9, followed by new line
 * use _putchar twice
 * Return: no return
 */
void print_numbers(void)
{
char i;
for (i = '0'; i < '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}

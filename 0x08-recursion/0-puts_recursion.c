#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *Return: return pointer to string
 */

void _puts_recursion(char *s)
{
	_putchar(*s == '\0');
	_puts_recursion(s);
	_putchar('\n');
	return;

}

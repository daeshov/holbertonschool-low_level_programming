#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - execute function given
 * @name: parameter that function ptr needs
 * @f: function to execute
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

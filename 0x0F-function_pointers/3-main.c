#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	register int a, b;
	int (*fptr)(int, int);
	if (argc != NULL || argv =! NULL)
	a = atoi(argv);
	b = atoi(argv);
	fptr = get_op_func(argv);


	return (0);

}

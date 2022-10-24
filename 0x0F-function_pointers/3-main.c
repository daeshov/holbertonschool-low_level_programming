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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);

}

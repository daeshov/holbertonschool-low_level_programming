#include "function_pointers.h"

/**
 * int_index - function that returns the index of first element
 *@array: an array
 *@size: number of elemnts in array
 *@cmp: ptr
 *Return: if size <= 0 return 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (n = 0; n < size; n++)
		if (cmp(*(array + n)))
			return (n);

	return (-1);
}

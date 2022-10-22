#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes
 * @array: an array for size to be determined
 * @size: size of array
 * @action: ptr to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	while (array != NULL && action != NULL)

		for (n = 0; n < size; n++)

			action(*(array++));
}

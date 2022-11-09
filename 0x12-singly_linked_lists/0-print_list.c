#include "lists.h"

/**
 * print_list - prints all the elements of list
 *@h: pointer to list
 *
 *Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;/** variable inialized to 0 */

	while (h != NULL)
	{
		if (h->str == NULL)/** for if any point of the list is nulll*/
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;/** then itorate through the rest of the list and return*/
		count++;
	}

	return (count);
}

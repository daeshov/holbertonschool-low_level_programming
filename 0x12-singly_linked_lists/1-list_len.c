#include "lists.h"

/**
 * list_len - returns the number of elements linked
 *@h: pointer to
 *Return: number of elements
 *
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;/** inialize variable that will return then length*/

	while (h != NULL)/** as long as the pointer is not null it will count the elementes linked */
	{
		num++;
		h = h->next;
	}


	return (num);
}

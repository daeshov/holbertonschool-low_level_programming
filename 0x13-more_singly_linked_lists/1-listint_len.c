#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	register size_t count = 0;/** count will count elements*/

	while (h)
	{ /** h will point to the next link */
		h = h->next;
		count++;
	} /** counter will ittorate then return*/
	return (count);
}

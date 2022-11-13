#include "lists.h"

/**
 * size_t print_dlistint_backward - prints dlistint_t list backward
 *@h: pointer of head of list
 *
 *Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	dlistint_t *end, *n = malloc(sizeof(dlistint_t));
	
	while (end != NULL)
	{
		end = n->prev;
		n->prev = h->next;
		n->next = h->prev;
		end = n->next;
		printf("%d\n", end->next);
	}
	
	return (n);
}

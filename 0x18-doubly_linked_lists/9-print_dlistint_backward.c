#include "lists.h"

/**
 *print_dlistint_backward - prints dlistint_t list backward
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
		end++;
		printf("\n[h] <=>");
	}

	return (h->n);
}

#include "lists.h"

/**
 *print_dlistint_backward - prints dlistint_t list backward
 *@h: pointer of head of list
 *
 *Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *n = h;
	size_t num = 0;

	while (n->next != NULL)
	{
		n = n->next;
	}
	while (n->prev != NULL)
	{
		printf("%d\n", n->n);
	}
	
	while (n)
	{
		num++;
	}

	return (num);
}

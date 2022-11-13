#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
/**tmp will free list*/
	if (!head)
		return;
	while (head)
	{/** tmp is copy of lis*/
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}

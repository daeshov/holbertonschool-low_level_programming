#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;
/**checks if pointer is null*/
	if (!head)
		return;
	current = *head;
	while (current)
	{/** sets pointer to pointer then frees tmp then sets to null*/
		tmp = current;
		current = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}

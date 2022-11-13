#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;
/** allocates memory for end of list named current*/
	if (!head || !newNode)
		return (NULL);
	newNode->n = n; /** if first or last of list is null will return*/
	newNode->next = NULL; /** move through list till null*/
	if (!*head)
		*head = newNode;
	else /** if last of list is not null it will return*/
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = newNode;
	}
	return (newNode);
}

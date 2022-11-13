#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
/** allocates space for new node*/
	if (!head || !newNode)
		return (NULL);
	newNode->n = n;/** will return null if fails*/
	newNode->next = NULL;
	if (*head)
		newNode->next = *head;
	*head = newNode;/** will return address if works*/
	return (newNode);
}

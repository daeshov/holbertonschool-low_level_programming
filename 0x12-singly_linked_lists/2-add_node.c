#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * add_node - function that adds new node at beginning of list
 *@str: string to be added on new node
 *@head: reference to head of linked list
 * Return: the address of head
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newStr;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));/** new memory allocated to for mew str*/
	if (!newNode)
		return (NULL);
	newStr = strdup(str);
	if (!newStr)
	{/** string will be copied */
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newStr);
	newNode->str = newStr;/** linked list to linke newnode to head of list*/
	newNode->next = *head;
	*head = newNode;
	return (*head);/**then returns the address or null if else */
}

#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;
/** defines arguments for varibles*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
/** index will index at key to get value or return null*/
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
/**node will pointer to the part of the table you want and be compared */
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
/** after if key matches it will return the value or null if else*/
	return ((node == NULL) ? NULL : node->value);
}

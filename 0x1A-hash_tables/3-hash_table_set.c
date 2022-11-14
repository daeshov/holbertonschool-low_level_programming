#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;
/** define aruguments for variables*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
/** pointer used to copy value or return 0 if null*/
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
/** will index at key and expand array for that size*/
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{/** will compare the strings to if 0 then will free space*/
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);/** if not 0 then retrun 1*/
		}
	}
/** allocates new space for table and returns if null*/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{/**copies key from table and if null then 0*/
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
/***/
	return (1);
}

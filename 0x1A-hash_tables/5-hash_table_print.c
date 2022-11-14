#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;
/** each key/value pair will be in brackets*/
	printf("{");
	for (i = 0; i < ht->size; i++)
	{/** i will count the pairs */
		if (ht->array[i] != NULL)
		{/** will put a "," if there is something to print*/
			if (comma_flag == 1)
				printf(", ");
/** node will be difined as key/value to print*/
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}

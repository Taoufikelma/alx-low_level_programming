#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 *
 * Description: Print a key/value pair of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		node = ht->array[i];

		while (node != NULL)
		{
			if (comma == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (comma == 0)
				comma = 1;
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
  * hash_table_delete - Main function to free all hash table
  * @ht: A pointer to hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"

/**
  * hash_table_get - The main function to get element from hash table
  * @ht: pointer to hash table
  * @key: The key to get the item from hash table
  * Return: return item in hash table or NULL
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

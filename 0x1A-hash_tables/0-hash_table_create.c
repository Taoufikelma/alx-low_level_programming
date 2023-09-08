#include "hash_tables.h"

/**
 * hash_table_create - Main function to creates a hash table
 * @size: Size of the array
 *
 * Return: If an error occurs - NULL.
 *         else - a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	new_ht->array = malloc(sizeof(hash_node_t *) * size);

	if (new_ht->array == NULL)
		return (NULL);

	new_ht->size = size;

	return (new_ht);
}

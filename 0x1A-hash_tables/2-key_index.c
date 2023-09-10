#include "hash_tables.h"
#include <stdlib.h>

/**
  * key_index - Get index for key given
  * @key: The key to get the index of
  * @size: Thesize of hash table
  * Return: index
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}

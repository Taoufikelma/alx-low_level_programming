#include "main.h"

/**
 * clear_bit - main function to clear a bit at the index
 *
 * @n: number to index
 * @index: bit to clear
 *
 * Return: success 1, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}

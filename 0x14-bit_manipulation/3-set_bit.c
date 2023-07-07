#include "main.h"

/**
 * set_bit - main function to set a bit at the index
 *
 * @n: number to index
 * @index: bit to set
 *
 * Return: if success return 1, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (!!(*n |= 1L << index));
}

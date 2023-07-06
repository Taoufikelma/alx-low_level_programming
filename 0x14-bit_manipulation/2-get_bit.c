#include "main.h"

/**
 * get_bit - main function to gets bit at the index
 *
 * @n: number to index
 * @index: bit to get
 *
 * Return: bit state or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index & 1);

	return (b);
}

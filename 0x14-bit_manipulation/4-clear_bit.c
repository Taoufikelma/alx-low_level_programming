#include "main.h"

/**
 * clear_bit - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: pointer of a unsigned long integer,
 * @index: index of the bit;
 *
 * Return: return
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}

	x = 1 << index;

	if (*n & x)
	{
		*n ^= n;
	}

	return (a);
}

#include "main.h"

/**
 * set_bit - a function tha can sets tha value
 * of a bit to 1 at a giveen index
 * @n: pointer of an unsigned long integer
 * @index: index of a bite
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
	{
		return (-1);
	}

	b = 1 << index;
	*n = (*n | b);

	return (1);
}

#include "main.h"

/**
 * flip_bits - main function count the number of bit need to flipped
 *
 * @n: 1est number
 * @m: 2nd number
 *
 * Return: number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		if (x & 1ul)
			c++;
		x = x >> 1;
	}
	return (c);
}

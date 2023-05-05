#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		val <<= 1;
		val += (*b - '0');
	}

	return (val);
}

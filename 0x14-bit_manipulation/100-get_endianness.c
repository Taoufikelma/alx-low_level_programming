#include "main.h"

/**
 * get_endianness - main function that return endianness of d system
 *
 * Return: 1 if small, otherwise 0
 */

int get_endianness(void)
{
	unsigned long int a = 1;

	return (*(char *)&a);
}

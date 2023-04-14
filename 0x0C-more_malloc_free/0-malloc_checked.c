#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function malloc
 * @b: number of bytes
 *
 * Return: return ptr
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}

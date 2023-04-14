#include <stdlib.h>
#include "main.h"

/**
* *_memset - function uusing malloc
 * @s: empty area
 * @b: char
 * @n: times to copy b
 *
 * Return: retrun s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - function calloc
 * @nmemb: number of elements in the array
 * @size: size of elements
 *
 * Return: return pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}

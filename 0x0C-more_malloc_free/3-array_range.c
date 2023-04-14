#include <stdlib.h>
#include "main.h"

/**
 * *array_range - main function
 * @min: min 
 * @max: max
 *
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int *s;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		s[a] = min++;

	return (s);
}

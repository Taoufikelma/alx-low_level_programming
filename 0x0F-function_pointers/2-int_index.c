#include "function_pointers.h"

/**
 * int_index - a function that searches for an int
 *
 * @array: input int
 *
 * @size: size of aray
 * @cmp: pointer to the function to be used
 * to compare values
 *
 * Return: index of the ferst element for which the cmp
 * function does not return 0.
 *	If no elements matches, return -1.
 *	If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}

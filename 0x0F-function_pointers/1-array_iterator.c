#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: inmut int array.
 *
 * @size: the size of the array
 *
 * @action: pointer to a function
 *
 * Return: nothing to return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}

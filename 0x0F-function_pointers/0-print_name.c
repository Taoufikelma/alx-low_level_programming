#include "function_pointers.h"

/**
 * print_name - function that can print a name.
 * @name: it's the input name.
 * @f: function of pointer.
 *
 * Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

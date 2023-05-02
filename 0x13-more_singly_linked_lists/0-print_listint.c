#include "lists.h"

/**
 * print_listint - function that can print all the elements of list
 * @h: the head of the list
 *
 * Return: the numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
			h = h->next;
		nnodes++;
	}
	return (nnodes);
}

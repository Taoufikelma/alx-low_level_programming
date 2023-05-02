#include "lists.h"

/**
 * listint_len - function that can return
 * the number of elements in a linked list
 *
 * @h: the head of the list
 *
 * Return: the numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

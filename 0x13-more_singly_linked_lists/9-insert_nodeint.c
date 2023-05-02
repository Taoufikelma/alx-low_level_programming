#include "lists.h"

/**
 * insert_nodeint_at_index - a function
 * that inserts a new node at a given position
 *
 * @head: the head
 * @idx: the index of the list where
 * the new node should be added
 * and it should be starts at 0
 * @n: int 
 *
 * Return: the address of the new node
 * 	NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw, *d;
	unsigned int a;

	if (head == NULL)
	{
		return (NULL);
	}

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}

	nw->n = n;
	nw->next = NULL;

	if (idx ==0)
	{
		nw->next = *head;
		*head= nw;
		return (nw);
	}
	
	d = *head;
	for (a = 0; a < idx - 1 && d != NULL; a++)
	{
		d = d->next;
	}

	if ( d == NULL)
	{
		free(nw);
		return (NULL);
	}

	nw->next = d->next;
	d->next = nw;

	return (nw);
}

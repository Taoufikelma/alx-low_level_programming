#include "lists.h"

/**
 * free_listp - free a linked list
 * @head: the head
 *
 * Return: nothing to return.
 */
void free_listp(listp_t **head)
{
	listp_t *tmp, *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - a function that can
 * free a linked list.
 * @h: pointer for the head of list.
 *
 * Return: return the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL, *nw = NULL, *add = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		nw = malloc(sizeof(listp_t));
		if (nw == NULL)
			exit(98);

		nw->p = (void *)*h;
		nw->next = hptr;
		hptr = nw;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp(&hptr);
				return (nnodes);
			}
		}

		*h = (*h)->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}


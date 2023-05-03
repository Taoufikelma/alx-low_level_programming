#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: the head;
 *
 * Return: return nothing,
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
*print_listint_safe - a function that can prints
 * a linked list, but can handle cycles
 *
 * @head: the head;
 *
 * Return: the number of the nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *nw, *add;

	hptr = NULL;
	while (head != NULL)
	{
		nw = malloc(sizeof(listp_t));

		if (nw == NULL)
			exit(98);

		nw->p = (void *)head;
		nw->next = hptr;
		hptr = nw;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}

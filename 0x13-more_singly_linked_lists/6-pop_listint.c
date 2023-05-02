#include "lists.h"

/**
 * pop_listint - a function that can delete
 * the head node of a linked list
 *
 * @head: head of a list
 *
 * Return: the head node's data return
 */

int pop_listint(listint_t **head)
{
	int dnode;
	listint_t *d;
	listint_t *cur;

	if (*head == NULL)
		return (0);

	cur = *head;

	dnode = cur->n;

	d = cur->next;

	free(cur);

	*head = d;

	return (dnode);
}

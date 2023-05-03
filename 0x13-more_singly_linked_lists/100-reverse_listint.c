#include "lists.h"

/**
 * reverse_listint - a function that can reverse
 * a linked list.
 *
 * @head: the head
 *
 * Return: a  pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *k, *l;

	k = NULL;
	l = NULL;

	while (*head != NULL)
	{
		l = (*head)->next;
		(*head)->next = k;
		k = *head;
		*head = l;
	}

	*head = k;
	return (*head);
}

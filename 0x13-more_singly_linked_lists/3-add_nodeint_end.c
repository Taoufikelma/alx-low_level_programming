#include "lists.h"

/**
 * add_nodeint - function that can add
 * a new node att the end of a linked list
 * @head: the head of the list
 * @n: element
 *
 * Return: the address of the new element
 * 	NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp;

	(void)tmp;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nw;
	}
	
	return (*head);
}

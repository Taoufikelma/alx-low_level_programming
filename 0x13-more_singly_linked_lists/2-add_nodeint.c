#include "lists.h"

/**
 * add_nodeint - function that can add
 * a new node att the beginning
 * @head: the head of the list
 * @n: element
 *
 * Return: the address of the new element
 * 	NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (*head);
}

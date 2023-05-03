#include "lists.h"

/**
 * delete_nodeint_at_index - a function that candeletes the node
 * at index of a linked list
 * @head: the head.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded,
 * -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *prev, *next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	prev = *head;
	for (a = 0; a < index - 1 && prev != NULL; a++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	next = prev->next;
	prev->next = next->next;
	free(next);

	return (1);
}

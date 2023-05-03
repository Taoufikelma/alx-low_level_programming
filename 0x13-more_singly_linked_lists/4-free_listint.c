#include "lists.h"

/**
 * free_listint - the function that
 * free a linkind list
 *
 * @head: the head of the list
 *
 * Return: return nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;


	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}

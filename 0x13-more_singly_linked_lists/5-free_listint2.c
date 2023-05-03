#include "lists.h"

/**
 * free_listint2 - a fnction that can
 * free a linked list.
 *
 * @head: the head of a list
 *
 * Return: return nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *cur;

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


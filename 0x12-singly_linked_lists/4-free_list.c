#include "lists.h"

/**
 * free_list - function that can free a list
 * @head: Head 
 * Return: nothing to return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw, *tmp;
	size_t nchar;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
		return (NULL);

	nw->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	nw->len = nchar;
	nw->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nw;
	}

	return (*head);
}

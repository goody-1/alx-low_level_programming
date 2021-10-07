#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 *
 * @head: start of the node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

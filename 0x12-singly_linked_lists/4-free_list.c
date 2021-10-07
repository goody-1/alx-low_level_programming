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

	free(head->next);
	free(head);

}
